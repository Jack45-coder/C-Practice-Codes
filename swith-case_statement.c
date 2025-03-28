// 6. Simple calculator using switch (Addition, Subtraction,
// Multiplication, Division).
// Input:
// Enter two numbers:
// 8 2
// Enter an operator (+, -, *, /):
// *
// Output:
// Result: 16

#include <stdio.h>

int main()
{
  int a, b;
  char c;

  printf("Enter the 1st num: ");
  scanf("%d",&a);

  printf("Enter the 2nd num: ");
  scanf("%d",&b);

  printf("Enter the operators: ");
  scanf("%d",&c);
  switch (c)
  {
  case 1: 
    printf("Sum = %d",a+b);
    break;

  default:
    break;
  }

  return 0;
}