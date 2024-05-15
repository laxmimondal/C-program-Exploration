#include <stdio.h>

void swap(int*, int*); // Function prototype with pointers

int main() {
    int a = 5;
    int b = 7;

    printf("Value of a and b before swap is %d and %d\n", a, b);

    swap(&a, &b); // Pass the addresses of a and b

    printf("Value of a and b after swap is %d and %d\n", a, b);
    return 0;
}

void swap(int* a, int* b) {
    int temp;
    temp = *a; // Dereference a and b to access their values
    *a = *b;
    *b = temp;
}
