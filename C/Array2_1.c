//Ascending Ordr using variable

#include <stdio.h>
#define CONST 10
int main () 
{
    int ascend[CONST];

    for (int i = 0; i < CONST; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &ascend[i]);
    }
    int temp;
    for (int i = 1;i < CONST; i++) {
        if (ascend[i] < ascend[i-1]) {
        temp = ascend[i - 1];
        ascend[i - 1] = ascend[i];
        ascend[i] = temp;
        i = 0;
        }
    }

    for (int i = 0; i < CONST; i++) {
        printf("%d ", ascend[i]);
    }
    printf("\n");
    return 0;
}