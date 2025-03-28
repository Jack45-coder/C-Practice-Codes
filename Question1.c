//  Sum of two number from user:

#include <stdio.h>
int main()
{
  int num1, num2;

  printf("Enter your first number : ");
  scanf("%d", &num1);
  printf("Enter your secound number : ");
  scanf("%d", &num2);

  int sum = num1 + num2;
  printf("Sum of num1 and num2 is: %d", sum);

  return 0;
}