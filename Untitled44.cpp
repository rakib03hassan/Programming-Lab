#include <stdio.h>

int main() {
    int number, choice;

   
    printf("Enter an integer: ");
    scanf("%d", &number);

   
    printf("\nChoose an operation:\n");
    printf("1. Check if the number is a Buzz number\n");
    printf("2. Check if the number is positive or negative\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        	
            if ((number % 10 == 7) || (number % 7 == 0)) {
                printf("%d is a Buzz number.\n", number);
            } else {
                printf("%d is not a Buzz number.\n", number);
            }
            break;

        case 2:
            // Check for positive or negative
            if (number > 0) {
                printf("%d is positive.\n", number);
            } else if (number < 0) {
                printf("%d is negative.\n", number);
            } else {
                printf("%d is zero (neither positive nor negative).\n", number);
            }
            break;

        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
