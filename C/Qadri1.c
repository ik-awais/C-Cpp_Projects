#include <stdio.h>
int main()
{
    int num, temp;
    printf("Enter a number > 256: ");
    scanf(" %d", &num);
    while (num > 0){
        if (num < 256) {
            if (num % 2 == 0) {
                printf("1");
            }
        }
    }
        printf("\n");
        
return 0;
}