#include <stdio.h>
#include <stdlib.h>

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
