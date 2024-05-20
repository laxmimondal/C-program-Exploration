#include <stdio.h>

// Function to convert Celsius to Fahrenheit
double temp(double celsius);

int main() {
    double celsius;
    
    // Prompt the user for input
    printf("Enter temperature in Celsius (0 to 100): ");
    scanf("%lf", &celsius);
    
    // Validate the input
    if (celsius < 0 || celsius > 100) {
        printf("Invalid input. Please enter a temperature between 0 and 100 degrees Celsius.\n");
        return 1;  // Return a non-zero value to indicate an error
    }
    
    // Display the converted temperature
    printf("Temperature in Fahrenheit: %.2lf\n", temp(celsius));
    
    return 0;
}

// Function definition to convert Celsius to Fahrenheit
double temp(double celsius) {
    return (celsius * 1.8) + 32;
}
