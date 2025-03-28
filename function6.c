//[Qs - 11] Write a program to call a function thats print a following pattern:
// Input - 3
// O/P - ***
//       ***
//       ***

#include <stdio.h>
void StarPattern();

int main()
{

  StarPattern();

  return 0;
}
void StarPattern()
{
  int n, i, j;
  printf("Enter the number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}
