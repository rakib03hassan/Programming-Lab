#include <stdio.h>
#include <stdlib.h>
#include <time.h>   
int main() {
    int coin_result;

  
    srand(time(NULL));

   
    coin_result = rand() % 2;


    if (coin_result == 0) {
        printf("The coin toss resulted in: Tail\n");
    } else {
        printf("The coin toss resulted in: Head\n");
    }

    return 0;
}