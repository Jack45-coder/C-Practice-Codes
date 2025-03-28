// Loop:- 3: while, do-while, for;

/*
1: initialization. starting point to ending poin.
2: condition.
3: updation.

2+4+6+8+10 = 30;
*/

// WAP to take a inputs from user and print sum of all even numbers.

#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  int i = 1;
  int sum = 0;

  while (i <= num) 
  {
    if (i % 2 == 0)
    {
      sum += i;
    }
    i=i+1;
  }
  printf("Sum of total even num betweens 1 to %d: %d",num,sum);

  return 0;
}