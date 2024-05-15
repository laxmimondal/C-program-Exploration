#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc and free

int main() {
    
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr = (int *)realloc(10 * sizeof(int));

    

    

    return 0;
}

