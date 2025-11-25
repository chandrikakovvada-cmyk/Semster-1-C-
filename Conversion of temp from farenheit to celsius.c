#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    // Prompt for input
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &fahrenheit) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    // Conversion
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    // Output result
    printf("%.2lf °F = %.2lf °C\n", fahrenheit, celsius);

    return 0;
}

