/* PRINT LIKE THIS:
     A B C
     B C D
     C D E
*/
#include <stdio.h>
int pattern(int num);
int main()
{
  int Num;
  printf("Enter the inputs: ");
  scanf("%d", &Num);
  pattern(Num);

  return 0;
}
int pattern(int num)
{
  int i,j;
  for ( i = 1; i <= num; i++)
  {
    char ch = 'A' + i - 1;
    for ( j = 1; j <= num; j++)
    {
      printf("%c ", ch++);
    }
    printf("\n");
  }
}