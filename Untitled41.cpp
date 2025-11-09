#include <stdio.h>

int main() {
   
    int experiment_data[] = {4, 2, 3, 2, 2, 1, 1, 2, 1, 1, 2, 1};
  
    int count = sizeof(experiment_data) / sizeof(experiment_data[0]);

    printf("Data from Experiment 2:\n");

    
    for (int i = 0; i < count; i++) {
        printf("%d ", experiment_data[i]);
    }

    printf("\n");

    return 0;
}