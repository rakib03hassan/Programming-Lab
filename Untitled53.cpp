#include <stdio.h>

int main() {
    int m, n;

    
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

   
    int original[m][n];

    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &original[i][j]);
        }
    }

    
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", original[i][j]);
        }
        printf("\n");
    }

  
    int transpose[n][m];


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = original[i][j];
        }
    }

   
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}