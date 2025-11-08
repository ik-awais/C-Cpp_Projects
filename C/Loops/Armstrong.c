#include <stdio.h>
int main() {
    int num, temp, sum = 0;

    printf("Enter a num: ");
    scanf("%d", &num);
    temp = num;
    int temp2 = temp;

    while (temp > 0)
    {
        num %= 10;
        sum += num * num * num;
        num = temp / 10;
        temp /= 10;
        
    }
    if (sum == temp2) 
    {
        printf("%d is an Armstrong Number.\n", temp2);
    }
    else
    {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}