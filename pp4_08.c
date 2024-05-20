//factorial of a number
#include <stdio.h>

int main() {
    int n ;
printf("Enter n\n");
    scanf("%d",&n);
    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("The factorial of %d",factorial);

    return 0;
}
