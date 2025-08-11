#include <stdio.h> // Include the standard input/output library

int main() {
    char ch; // Declare a character variable to store the input

    printf("Enter a character: "); // Prompt the user to enter a character
    scanf("%c", &ch);             // Read the character input by the user

    // Print the character and its ASCII value
    // %c displays the character, and %d displays its integer (ASCII) value
    printf("The ASCII value of %c is %d\n", ch, ch); 

    return 0; // Indicate successful program execution
}