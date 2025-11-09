#include <stdio.h>

int main() {
    int n = 4; // You can change this value to print larger or smaller patterns

    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}