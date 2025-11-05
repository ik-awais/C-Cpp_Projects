#include <stdio.h>
int main()
{
    int star, limit, space;

    for (limit = 1; limit <= 5; limit++){

        for (star = 1; star <= limit; star++){

            printf("*");

        }

        printf("\n");
    }
    
    return 0;
}