#include <stdio.h>

int main() {
    int age;
    int is_eligible; 

    printf("Enter your age: ");
    scanf("%d", &age);

   
    if (age >= 18) {
        is_eligible = 1;
    } else {
        is_eligible = 0;
    }

    switch (is_eligible) {
        case 1:
            printf("You are eligible to vote.\n");
            break;
        case 0:
            printf("You are not eligible to vote.\n");
            break;
        default:
           
            printf("Invalid eligibility status.\n");
            break;
    }

    return 0;
}