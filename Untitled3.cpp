#include <stdio.h>

int main() {
    float num1, num2, difference;

    // Prompt the user to enter the first number
    printf("Enter the first floating-point number: ");
    // Read the first floating-point number from the user
    scanf("%f", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second floating-point number: ");
    // Read the second floating-point number from the user
    scanf("%f", &num2);

    // Calculate the difference
    difference = num1 - num2;

    // Display the result
    printf("The difference between %.2f and %.2f is: %.2f\n", num1, num2, difference);

    return 0; // Indicate successful program execution
}