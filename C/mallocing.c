#include <stdlib.h>
#include <stdio.h>

// Program receives one arguments: matrix order
int main (int argc, char **argv)
{
    int i, j;
    unsigned int soma = 0;
    int dimension = atoi (argv[1]); // Convert input string to int

    /* Matrix is a pointer to an array of integers
    Different from int *Matrix[dimension], which means:
    Matrix is an array of pointers int
    (requires a compiler with support for some C99 constructs)*/
    int (*Matrix)[dimension] = malloc (dimension * dimension * sizeof (Matrix));

    if (Matrix == NULL){
        printf ("Error on allocation\n");
        exit (0);
    }

    // Likewise, deallocation can be done in one go
    free (Matrix);

    return 0;
}
