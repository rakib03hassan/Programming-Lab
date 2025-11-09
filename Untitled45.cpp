#include <stdio.h>

int main() {
    int num1, num2, num3;
    int positive_count = 0;
    int negative_count = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

   
    if (num1 == num2 && num2 == num3) {
        printf("All three numbers are equal.\n");
    } else {
        int greatest = num1;
        if (num2 > greatest) {
            greatest = num2;
        }
        if (num3 > greatest) {
            greatest = num3;
        }
        printf("The greatest number is: %d\n", greatest);
    }

    
    if (num1 > 0) positive_count++;
    else if (num1 < 0) negative_count++;

    if (num2 > 0) positive_count++;
    else if (num2 < 0) negative_count++;

    if (num3 > 0) positive_count++;
    else if (num3 < 0) negative_count++;

    if (positive_count == 3) {
        printf("Entered numbers are all positive.\n");
    } else if (negative_count == 3) {
        printf("Entered numbers are all negative.\n");
    } else {
        printf("Entered numbers are mixed (positive, negative, or zero).\n");
    }

    return 0;
}