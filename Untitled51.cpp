#include <stdio.h>

int main() {
    int size, i;
    int arr[100]; 
    int even_count = 0;
    int odd_count = 0;

  
    printf("Enter the size of the array: ");
    scanf("%d", &size);

 
    printf("Enter %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

  
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) { // Check if the number is even
            even_count++;
        } else { // Otherwise, the number is odd
            odd_count++;
        }
    }

   
    printf("\nTotal number of even numbers in the array: %d\n", even_count);
    printf("Total number of odd numbers in the array: %d\n", odd_count);

    return 0;
}