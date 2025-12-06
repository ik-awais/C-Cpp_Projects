// Function to find Prime with a basic logic
#include <stdio.h>
int prime_check(int numb);
int main(){
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    if (prime_check(num) == 0)
    {
        printf("Prime\n");
    }
    else{
        printf("Composite.\n");
    }

    return 0;
}
int prime_check(int numb){
    int prime = 0;
    for (int i = 2; i < numb; i++)
    {
        if (numb % i == 0)
        {
            prime = 1;
        }
    }
    return prime;
}