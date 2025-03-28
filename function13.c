/* Qs - 6: WAP to call afunction that prints the following pattern.
   Input - 3:
        *
      * * *
    * * * * *
*/
#include <stdio.h>
void starpattern(int num)
{
  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= num - i; j++)
    {
      printf("  ");
    }
    for (int k = 1; k <=(2 * i - 1); k++)
    {
      printf("* ");
    }
    printf("\n");
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  starpattern(n);

  return 0;
}