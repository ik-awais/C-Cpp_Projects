#include <stdio.h>
int main()
{
    int i, x;
    for (i = 1; i <= 5; i++){
        for (x = 1; x <= 10; x++) {
            printf(" %2d", i * x);
        }
        printf("\n");
    }
    return 0;
}