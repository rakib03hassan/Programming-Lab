#include <stdio.h>

int main() {
    int a, b;

    
    printf("--- Swapping using arithmetic operations ---\n");
    printf("Enter two integers for arithmetic swap: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b; 
    a = a - b; 

    printf("After swap: a = %d, b = %d\n\n", a, b);

 
    int x, y;
    printf("--- Swapping using bitwise XOR operator ---\n");
    printf("Enter two integers for XOR swap: ");
    scanf("%d %d", &x, &y);
    printf("Before swap: x = %d, y = %d\n", x, y);

    x = x ^ y; 
    y = x ^ y;
    x = x ^ y; 

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
