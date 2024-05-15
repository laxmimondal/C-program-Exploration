#include <stdio.h>

// Function to display the 2D array
void displayArray(int arr[][100], int rows, int cols) {
    printf("2D Array Contents:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Invalid input for rows or columns. Exiting...\n");
        return 1; // Exit with an error code
    }

    int arr[100][100]; // Assuming maximum size for the array

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    displayArray(arr, rows, cols);

    return 0; // Exit with a success code
}
