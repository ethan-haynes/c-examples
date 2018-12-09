#include <stdio.h>
#include <string.h>

#include "userinput.h"
#include "lrange.h"

int printLineRange(UserInput u_input)
{
    
    char buffer[255];
    long str_len;
    FILE *file = fopen(u_input.filename, "r");

    /* check file exists on path */
    if ( file == NULL )
    {
        perror("ERROR");
        return -1;
    }

    while ( fgets(buffer, 255, file) )
    {
        str_len = strlen(buffer);

        /* print if we are in the range */
        if ( u_input.start <= u_input.end )
        {
            printf("%s", buffer);
        }
        
        /* increment counter if at end of line */
        if ( buffer[str_len - 1] == '\n' )
        {
            u_input.start++;
        }
    }
    
    fclose(file); 
    return 0;
}
