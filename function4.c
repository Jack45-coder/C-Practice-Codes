//[ Qs - 13 ] Write a function to check given number is even or odd:

#include <stdio.h>
int EvenOdd(int num);
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  EvenOdd(num);

  return 0;
}
int EvenOdd(int num)
{
  if (num % 2 == 0)
  {
    printf("%d number is a even number:", num);
  }
  else
  {
    printf("%d number is a odd number:", num);
  }
}