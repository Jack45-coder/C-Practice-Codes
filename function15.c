// Qs - 8: WAP findGCD(a, b) than calculates and returns the grestest common divisor
//         (GCD) of two numbers using the Euclidean algorithm.
#include <stdio.h>
int findGCD(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
int main()
{
  int num1, num2;
  printf("Enter Two numbers:\n");
  scanf("%d %d", &num1, &num2);
  printf("GCD of %d and %d number is %d", num1, num2, findGCD(num1,num2));

  return 0;
}