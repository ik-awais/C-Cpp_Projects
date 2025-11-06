//Ascending Order 

#include <stdio.h>
#define CONST 10
int main() 
{
    int ascend[CONST] = {34,3452,234,54,545,6432,213,75};

    for (int i = 1; i < CONST; i++) {
        if (ascend[i] < ascend[i-1]) {
            // a=a+b;
            // b=a-b;
            // a=a-b;
            ascend[i] += ascend[i-1];
            ascend[i-1] = ascend[i] - ascend[i-1];
            ascend[i] -= ascend[i-1];
            i = 0;     
        }
    }

    for (int i = 0; i < CONST; i++) {
        printf("%d ", ascend[i]);
    }

    printf("\n");

    return 0;
}