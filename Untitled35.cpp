#include <stdio.h>

int main() {
    int start, end, i, j, is_prime;

   
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    
    if (start <= 1) {
        start = 2;
    }

    
    for (i = start; i <= end; i++) {
        is_prime = 1; 

 
        for (j = 2; j * j <= i; j++) {
          
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d ", i);
        }
      
    }

    printf("\n");
    return 0;
}