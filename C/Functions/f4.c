// Function for finding Prime numbers
#include <stdio.h>
int prime_check(int numb);
int main(){
    int num;
    printf("Enter a Positive Number: ");
    scanf("%d", &num);
    printf("%d is %s\n",num,(prime_check(num)==1)?"Prime":"Composite");
    return 0;
}
int prime_check(int numb){
    int prime = 1;
    for(int i = 2; i < numb/2; i++)
    {
        if(numb % i == 0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}