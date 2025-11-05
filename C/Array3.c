#include <stdio.h>
#define CONST 10
int main() {
    int ascend[CONST];

    for (int i = 0; i < CONST; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &ascend[i]);
    }
    for (int i = 1; i < CONST;i++) {
        if (ascend[i] < ascend[i - 1]) {
            //a = a + b
            //b = a - b
            //a = a - b
            ascend[i] *= ascend[i-1];
            ascend[i-1] = ascend[i] / ascend[i - 1];
            ascend[i] /= ascend[i - 1];
            i = 0; 
        }
    }
        printf("Second Largest %d ", ascend[CONST - 2]);
        
    printf("\n");
    return 0;
}