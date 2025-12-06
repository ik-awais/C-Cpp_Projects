// Function to calculate Factorial
#include <stdio.h>
int factorial(int Num);
int main(){
    int num;
    printf("Enter a num to find Factorial: ");
    scanf("%d", &num);
    printf("Factorial of num %d is %d.\n", num, factorial(num));

    return 0;
}
int factorial(int Num){
    int factorial = 1;
    for(int i = Num; i > 0; i--)
    {
        factorial *= i;
    }
    return  factorial;
}