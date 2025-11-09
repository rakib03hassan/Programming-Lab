#include <stdio.h>

int main() {
    int rollNumber;

  
    printf("Enter the roll number: ");
    
    scanf("%d", &rollNumber);

    if (rollNumber == 100) {
        printf("Roll number 100 is present.\n");
    } else {
        printf("Roll number 100 is not present (the entered roll number is %d).\n", rollNumber);
    }

    return 0;
}