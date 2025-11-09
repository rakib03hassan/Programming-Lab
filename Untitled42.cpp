#include <stdio.h>

int main() {
    printf("First Sequence (10 to 8):\n");
    // Loop from 10 down to 8
    for (int i = 10; i >= 8; i--) {
        printf("%d\n", i);
    }

    printf("\nSecond Sequence (7 to 1):\n");
    // Loop from 7 down to 1
    for (int i = 7; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}