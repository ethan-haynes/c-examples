#include <stdio.h>
#include <stdlib.h>

#include "lrange.h"
#include "userinput.h"

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
