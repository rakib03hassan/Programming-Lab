#include <stdio.h>

int main() {
    int choice;
    float temperature;
    float convertedTemperature;

    printf("Temperature Conversion Program\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, convertedTemperature);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature * 9.0 / 5.0) + 32; 
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, convertedTemperature);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}