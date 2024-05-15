#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc

int main() {
    int size = 5;
    float *ptr = (float *)malloc(size * sizeof(float));

    

    ptr[0] = 4.5;
    ptr[1] = 4.6;
    ptr[2] = 4.7;
    ptr[3] = 4.8;
    ptr[4] = 4.9;

    printf("%f\n", ptr[2]);

    // Don't forget to free the allocated memory when you're done
    free(ptr);

    return 0;
}
