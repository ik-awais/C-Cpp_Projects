#include <stdio.h>
int main(){
    int x = 5, *p;
    char c, *q;
    p = &x, q = &c;
    printf("Value of x: %d\n", *p); 
    printf("Value of p: %p\n", p); 
    printf("Address of p: %p\n", &p);
    printf("Address of x: %p\n", &x);
    printf("Size of x: %zu\n", sizeof(x));
    printf("Size of p: %zu\n", sizeof(p));
    printf("Size of c: %zu\n", sizeof(c));
    printf("Size of q: %zu\n", sizeof(q));

return 0;
}