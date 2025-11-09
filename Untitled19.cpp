#include <stdio.h>

int main() {
    // Declare integer variables to store the three numbers
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");

    // Read the three numbers from the user
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use a nested if-else statement to find the maximum
    if (num1 >= num2) {
        // If num1 is greater than or equal to num2, compare num1 with num3
        if (num1 >= num3) {
            printf("%d is the maximum number.\n", num1);
        } else {
            printf("%d is the maximum number.\n", num3);
        }
    } else {
         
		 if (num2 >= num3) {
            printf("%d is the maximum number.\n", num2);
        } else {
            printf("%d is the maximum number.\n", num3);
        }
    }

    return 0;
}