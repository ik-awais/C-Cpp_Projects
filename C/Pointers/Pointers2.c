// Trying to Merge Function and Pointer
#include <stdio.h>
void test_function(int *test);
int main(){
    int num = 1;
    test_function(&num);
    return 0;
}
void test_function(int *test){
    *test = *test + *test;
    printf("Double of num: %d\n", *test);
}