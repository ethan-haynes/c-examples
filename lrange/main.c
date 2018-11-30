#include <stdio.h>
#include <stdlib.h>

#include "lrange.h"
#include "userinput.h"


UserInput *handleInput(char **argv)
{
    UserInput *u_input = malloc (sizeof (*u_input));
    int start = atoi(argv[1]), 
        end = atoi(argv[2]);
    
    if ( start <= end )
    {
        u_input->start = start;
        u_input->end = end;
        u_input->filename = argv[3];
        return u_input;
    } else {
        free(u_input);
        return NULL;
    }
}

int main(int arg, char **argv)
{
    if ( arg != 4 )
    {
        printf("Error: must include range and file name\n");
        exit(-1);
    }

    UserInput *u_input = handleInput(argv);

    if ( u_input == NULL )
    {
        printf("Error: numbers in range must be positive\n");
        exit(-1);
    }    

    int exit_status = printLineRange(*u_input);
    
    exit( exit_status );
}
