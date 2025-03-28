// Qs- WAP to convert decimal to binary:

#include <stdio.h>
int decToBinary(int num)
{
  int ans = 0;
  int power = 1;
  while (num > 0)
  {
    ans = ans + (num % 2) * power;
    num = num / 2;
    power = power * 10;
  }
  return ans;
}
int main()
{
  int num;
  printf("Enter the Decimal number you want find binary: ");
  scanf("%d", &num);
  // int result = decToBinary(num);
  printf("%d", decToBinary(num));
  return 0;
}
