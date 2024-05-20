
#include <stdio.h>

// Function to convert Celsius to Fahrenheit
double temp(double celsius);

int main() {
    double celsius;
    
    // Prompt the user for input
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    
    // Display the converted temperature
    printf("Temperature in Fahrenheit: %.2lf\n", temp(celsius));
    
    return 0;
}

// Function definition to convert Celsius to Fahrenheit
double temp(double celsius) {
    return (celsius * 1.8) + 32;
}
