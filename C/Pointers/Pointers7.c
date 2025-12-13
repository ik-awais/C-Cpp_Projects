// Find largest element via pointers in array
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *pointer, size, largest = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    pointer = malloc(size*sizeof(int));

    for(int i = 0; i < size; i++)
    {
        scanf("%d", pointer);
        pointer++;
    }
    pointer -= size;
    for(int i = 0; i < size; i++)
    {
        if(largest < *pointer)
        {
            largest = *pointer;
        }
        pointer++;
    }
    printf("Largest num: %d\n", largest);
    pointer -= size;
    free(pointer);
return 0;
}