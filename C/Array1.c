#include <stdio.h>
#define CONST 10
int main () {
    
    int arr1[CONST] = {30, 53, 531,33,90, 01};
    int arr2[CONST];
    int even = 0, odd = 0;
    for (int i = 0; i < CONST; i++) {
        arr2[i] = 0;
    }
    for (int i = 0; i < CONST; i++) {
        arr2[i] = arr1[i];
    }
    printf("Values of Array 1\n");
    for (int j = 0; j < CONST; j++) {
        printf("%5d", arr1[j]);
    }
    printf("\n");
    printf("Values of Array 2\n");
    for (int j = 0; j < CONST; j++) {
        printf("%5d", arr2[j]);
    }

    printf("\n");
    
return 0;
}