// Write a program to take user input and check whether the number is perfect or not:
// Ex - 6 ---> [ 1 + 2 + 3 = 6 ] Perfect
// Ex - 8 ---> [1 + 2 + 4 = 7 ]  Not perfect

#include <stdio.h>
int main()
{
  int num1, num2, gcd;

  printf("Enter the 1st number: ");
  scanf("%d", &num1);

  printf("Enter the 2nd number: ");
  scanf("%d", &num2);
  for (int i = 1; i <= num1 && i <= num2; i++)
  {
    if (num1 % i == 0 && num2 % i == 0)
    {
          gcd = i;
    }
  }
   printf("%d is greatest factor is %d and %d", gcd, num1, num2);
  return 0;
}