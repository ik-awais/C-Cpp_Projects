// Checks if the entered number is 4-digit or not
#include <stdio.h>
int main() 
{
   int num, limit, i;

   printf("Enter a four-digit number:");
   scanf("%d", &num);
   
   i = num;
   num %= 1000;
   num %= 100;
   num %= 10;

   if (num >= 0 && num < 10 && i < 10000 && i > 999) {
      printf("%d is a four digit number", i);
      
   }
   else {
      printf("%d is not a four-digit number.", i);
   }

   printf("\n");
    
return 0;
}