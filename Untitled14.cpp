#include <stdio.h>
#include <math.h> 

int main() {
    double positiveNum = 4.7;
    double negativeNum = -3.2;

   
    printf("For the positive number %.2f:\n", positiveNum);
    printf("Floor: %.0f\n", floor(positiveNum));
    printf("Ceiling: %.0f\n", ceil(positiveNum));

    printf("\n"); 

   
    printf("For the negative number %.2f:\n", negativeNum);
    printf("Floor: %.0f\n", floor(negativeNum));
    printf("Ceiling: %.0f\n", ceil(negativeNum));

    return 0;
}