// Qs - 9: Write a program to call afunction that takes user input and tells if it is prime or not.
#include <stdio.h>
void findPrime()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  int isprime = 1;
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      isprime = 0;
    }
  }
  if (isprime)
  {
    printf("%d is a prime number.", num);
  }
  else
  {
    printf("%d is not a prime number.", num);
  }
}
int main()
{

  findPrime();

  return 0;
}