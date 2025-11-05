#include <stdio.h>
int main() 
{
   int num = 0, limit = 0, i;

   printf("Enter a num:");
   scanf("%d", &num);
   
   i = num;

   printf("Enter Limit:");
   scanf("%d", &limit);

   while (limit > 0) {
    printf("%d ", num);
    num += i;
    limit--;
   }
   printf("\n");
    
return 0;
}