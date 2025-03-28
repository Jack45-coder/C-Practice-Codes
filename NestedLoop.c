// Write a program to print multiplication table of a number from n to n:

#include <stdio.h>
int main()
{
  printf("Enter the number to print multiplication table from:\n");

  int i;
  printf("Enter a 1st number: "); 
  scanf("%d", &i);

  int j;
  printf("Enter the 2nd number: ");
  scanf("%d", &j);

  printf("The multiplication table of %d to %d is:\n", i, j);
  for (; i <= j; i++)
  {
    for (int sp = 1; sp <= 10; sp++)
    {
      int table = i * sp;
      printf("%d * %d = %d\n", i, sp, table);
    }
    printf("\n\n");
  }

  return 0;
}