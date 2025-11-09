#include <stdio.h>
#include <math.h> 

int main() {
    int num, lastDigitModulus, lastDigitWithoutModulus;

    printf("Enter an integer: ");
    scanf("%d", &num);

   
    lastDigitModulus = num % 10;
    printf("Last digit (using modulus): %d\n", lastDigitModulus);

   
    lastDigitWithoutModulus = num - (num / 10) * 10;
    printf("Last digit (without using modulus): %d\n", lastDigitWithoutModulus);

    return 0;
}