#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "last10.h"

int printLast10(char *filename)
{
    int     i = 0, 
            offset = 0;
    char    *lines[10] = { "", "", "", "", "", "", "", "", "", "" };
    char    buffer[255];
    FILE    *file = fopen(filename, "r");

    if ( file == NULL )
    {
        perror("ERROR");
        return -1;
    }

    while ( fgets(buffer, 255, file) )
    {
        long new_buff_len = strlen(buffer),
             prev_buff_len = strlen(lines[i%10]);
        
        if ( lines[i%10][ prev_buff_len - 1 ] == '\n' ) 
        {
            char *str = (char *) malloc(1 + new_buff_len);
            strcat(str, buffer);
            lines[i%10] = str;
        }
        else
        {
            char *str = (char *) malloc(1 + prev_buff_len + new_buff_len );
            strcat(str, lines[i%10]);
            strcat(str, buffer);
            lines[i%10] = str;
        }

        if ( buffer[new_buff_len - 1] == '\n' )
        {
            i++;
        }
    }

    fclose(file);

    offset = i - 10 - 1;
    while (i != ++offset)
    {
        printf("%s", lines[offset%10]);
    }

    return 0;
}
