#include <stdio.h>


int sumOfFirstNEvenNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i);
    }
    return sum;
}

int main() {
    int numberOfEvenNumbers = 10;
    int totalSum = sumOfFirstNEvenNumbers(numberOfEvenNumbers);

    printf("The sum of the first %d even natural numbers is: %d\n", numberOfEvenNumbers, totalSum);

    return 0;
}