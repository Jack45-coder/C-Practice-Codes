// Qs - 7: WAP where the user will provide an integeras input create a function digitcount() that
//       - Count the total number of digit in the given number and prints the count.
//       - digitcount() Calls another function reverseNumber() that takes the original user input.
//         reverse it .and print the reversed number.
#include <stdio.h>
void reverseNumber(int num)
{
  int reverse = 0;
  while (num != 0)
  {
    reverse = reverse * 10 + (num % 10);
    num /= 10;
  }
  printf("Reversed number = %d\n", reverse);
}
void digitCount(int num)
{
  int count = 0;
  int temp = num;
  while (temp > 0)
  {
    temp = temp / 10;
    count++;
  }
  printf("Total digit of this number is %d\n", count);
  reverseNumber(num);
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  digitCount(n);

  return 0;
}