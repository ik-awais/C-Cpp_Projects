// Memory Allocation for an Array via Pointer
#include <stdio.h>
#include <stdlib.h>
int main(){
    int size;
    printf("Size of array: ");
    scanf("%d", &size);
    int *pointer, *temp;
    pointer = malloc(size*sizeof(int));
    temp = pointer;
    printf("Elements of array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", pointer);
        pointer++;
    }
    pointer = temp;
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *pointer);
        pointer++;
    }
    printf("\n");
return 0;
}