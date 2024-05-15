#include <stdio.h>

void reverse(int a[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 10;

    printf("Original Array: ");
    display(arr, n);

    reverse(arr, n);

    printf("Reversed Array: ");
    display(arr, n);

    return 0;
}
