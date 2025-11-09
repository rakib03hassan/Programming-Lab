#include <stdio.h>

int main() {
    int units;
    float totalBill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

  
    switch (units / 100) {
        case 0: 
            totalBill = units * 1.20;
            break;
        case 1: 
            totalBill = (100 * 1.20) + ((units - 100) * 2.00);
            break;
        case 2: 
            totalBill = (100 * 1.20) + (100 * 2.00) + ((units - 200) * 3.00);
            break;
        default: 
            totalBill = (100 * 1.20) + (100 * 2.00) + (100 * 3.00) + ((units - 300) * 3.50);
            break;
    }

    printf("Total electricity bill: $%.2f\n", totalBill);

    return 0;
}