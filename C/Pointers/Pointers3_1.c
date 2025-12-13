// Swapping 2 variable values via pointers
#include <stdio.h>
int main(){

    int num1 = 5, num2 = 10;
    int *p1 = &num1, *p2 = &num2;
    printf("%d ", num1);
    printf("%d\n", num2);
    // Swapping values
    *p1 = (*p1) * (*p2);
    *p2 = *p1 / *p2;
    *p1 = *p1 / *p2;

    printf("%d ", *p1);
    printf("%d\n", *p2);
return 0;
}