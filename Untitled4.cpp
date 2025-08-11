#include <stdio.h>

// Recursive function to print the multiplication table
void printMultiplicationTable(int number, int multiplier) {
    // Base case: Stop recursion when the multiplier exceeds 10 (or your desired limit)
    if (multiplier > 10) { 
        return; 
    }

    // Print the current line of the multiplication table
    printf("%d x %d = %d\n", number, multiplier, number * multiplier);

    // Recursive call: Call the function with an incremented multiplier
    printMultiplicationTable(number, multiplier + 1);
}

int main() {
    int num;

    // Get input from the user
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Initiate the recursive function, starting with a multiplier of 1
    printMultiplicationTable(num, 1); 

    return 0;
}