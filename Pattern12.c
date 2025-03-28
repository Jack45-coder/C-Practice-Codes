/*  PRINT LIKE THIS
          *
        * *
      * * *
        * *
          *
 */
#include <stdio.h>
#include<stdlib.h>
int main()
{
  int i, j;
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  for (i = 1; i <= (n * 2 - 1); i++)
  {
    for (int k = 1; k <=abs(n - i); k++) // uae [abs] for space.
    {
      printf("  ");
    }
    if (i <= n)
    {
      for (j = 1; j <= i; j++)
      {
        printf("* ");
      }
    }
    else
    {
      for (j = 1; j <= (n * 2 - i); j++)
      {
        printf("* ");
      }
    }
    printf("\n");
  }
  return 0;
}