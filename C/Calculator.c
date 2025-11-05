#include <stdio.h>
int main()
{
  int num1, num2,result;
  char operation;
  printf("Enter 1st number: ");
  scanf("%d", &num1);
  printf("Mention the Operation(+, -, *, /, %%, $(Average)): ");
  scanf(" %c", &operation);
  printf("Enter 2nd number: ");
  scanf("%d", &num2);
  
  if (operation == '+') {
      result = num1 + num2 ;
      printf("%d + %d = %d\n", num1, num2, result);
  }
  else if (operation == '-') {
      result = num1 - num2 ;
      printf("%d - %d = %d\n", num1, num2, result);
  }
  else if (operation == '*') {
      result = num1 * num2 ;
      printf("%d * %d = %d\n", num1, num2, result);
  }
  else if (operation == '/') {
      result = num1 / num2 ;
      result = (float)result;
      printf("%d / %d = %d\n", num1, num2, result);
  }
  else if (operation == '%') {
      result = num1 % num2 ;
      printf("%d %% %d = %d\n", num1, num2, result);
  }
  else if (operation == '$') {
    float result = (num1 + num2)/2.0;
    printf("Average of %d & %d is %0.2lf\n", num1, num2, result);
  }

  return 0;
}
