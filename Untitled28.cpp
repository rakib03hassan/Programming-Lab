#include <stdio.h>

int main() {
    int jobLevel;
    float basicSalary, bonus = 0.0, allowance = 0.0, totalSalary;

   
    printf("Enter the employee's basic salary: ");
    scanf("%f", &basicSalary);
    printf("Enter the employee's job level (1 for Manager, 2 for Team Lead, 3 for Associate): ");
    scanf("%d", &jobLevel);

    switch (jobLevel) {
        case 1:
            bonus = basicSalary * 0.20;
            allowance = 5000.00;      
            break;
        case 2: 
            bonus = basicSalary * 0.15; 
            allowance = 2500.00;        
            break;
        case 3:
            bonus = basicSalary * 0.10;
            allowance = 1000.00;        
            break;
        default:
            printf("Invalid job level entered. No bonus or allowance will be applied.\n");
            break;
    }

    totalSalary = basicSalary + bonus + allowance;

  
    printf("\n--- Salary Details ---\n");
    printf("Basic Salary:    $%.2f\n", basicSalary);
    printf("Bonus:           $%.2f\n", bonus);
    printf("Allowance:       $%.2f\n", allowance);
    printf("----------------------\n");
    printf("Total Salary:    $%.2f\n", totalSalary);

    return 0;
}