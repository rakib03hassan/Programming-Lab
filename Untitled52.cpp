#include <stdio.h>

int main() {
    int r, c;
    int mat1[10][10], mat2[10][10], sum[10][10]; 

   
    printf("Enter the number of rows (1-10): ");
    scanf("%d", &r);
    printf("Enter the number of columns (1-10): ");
    scanf("%d", &c);

   
    printf("\nEnter elements of Matrix 1:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

 
    printf("\nEnter elements of Matrix 2:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

  
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}