/* Write a program to take a number from user and print following this:-
   Input = 5:
   O/P:-
   1 2 3 4 5
   1 2 3 4
   1 2 3
   1 2
   1
*/

#include <stdio.h>

int main()
{
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);

  for (int i = num; i > 0; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d\t", j);
    }
    printf("\n");
  }

  return 0;
}