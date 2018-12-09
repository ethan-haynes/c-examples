#include <stdio.h>
#include <stdlib.h>

#include "last10.h"

int main(int arg, char **argv)
{
    // check number of arguments
    if ( arg != 2 )
    {
        printf("Error: file name\n");
        exit(-1);
    }

    int exit_status = printLast10(argv[1]);
    
    exit( exit_status );
}
