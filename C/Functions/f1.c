#include <stdio.h>
#include <math.h>
//With ubuntu perhaps, I had to use
//"gcc f1.c -o f1 -lm" command to link
//math library with my code perfectly
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);

    printf("Square of num: %0.2f\n",  sqrt(num));
    
    return 0;
}