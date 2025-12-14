// Swap values of 2 pointers
#include <stdio.h>
int main(){
    int *p1, *p2, *p3;
    int a = 5, b = 10;
    p1 = &a, p2 = &b;
    printf("%p\n%p\n", p1, p2);
    p3 = p1;
    p1 = p2;
    p2 = p3;
    printf("%p\n%p\n", p1, p2);

return 0;
}