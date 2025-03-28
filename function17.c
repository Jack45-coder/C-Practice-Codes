// Qs - 10: WAP to take two numbers from the user and print the prime number present between them.
#include <stdio.h>
void printPrime()
{
  int num1, num2;
  printf("Enter the two numbers:\n");
  scanf("%d %d", &num1, &num2);

  for (int i = num1; i <= num2; i++)
  {
    if(i < 2){
      continue;
    }
     int isprime = 1;

    for (int j = 2; j * j <= i; j++)
    {
      if (i % j == 0)
      {
        isprime = 0;
        break;
      }
    }
    if (isprime)
    {
      printf("%d is a prime number\n", i);
    }
  }
}
int main()
{
  printPrime();

  return 0;
}