// Pass array to a function via pointers
#include <stdio.h>
void test_function(int *arr, int size);
int main(){
    int array[] = {1,3,6,465,245,23};
    int *pointer = &array[0];
    test_function(pointer, sizeof(array)/4);
return 0;
}
void test_function(int *arr, int size){
    int copy_array[size];
    for(int i = 0; i < size; i++)
    {
        copy_array[i] = *arr;
        arr++;
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d ", copy_array[i]);
    }
    printf("\n");
}