#include <stdio.h>

int isPrime(int number) {
    if (number <= 1) {
        return 0;  // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;  // It's not prime if it has a divisor other than 1 and itself
        }
    }

    return 1;  // It's prime if no divisors were found
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
