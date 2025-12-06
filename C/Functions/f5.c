// Return Largest of 3 numbers
#include <stdio.h>
#define SIZE 3
void check_largest();
int main(){
    check_largest();
    return 0;
}
void check_largest(){
    int largest = 0;
    int array[SIZE] = {0};
    printf("Enter 3 numbers: ");
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < SIZE; i++)
    {
        if(array[i] > largest)
        {
            largest = array[i];
        }
    }
    printf("Largest number is: %d\n", largest);
}