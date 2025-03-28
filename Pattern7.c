/*   PRINT LIKE THIS:
         a  b  c
         d  e  f
         g  h  i
*/

#include <stdio.h>
int main()
{
  int i;
  int j;
  char ch = 'a';
  for (i = 1; i <= 3; i++)
  {
    for (int j = 1; j <= 3; j++)
    {
      printf("%c ", ch);
      ch++;
    }
    printf("\n");
  }

  return 0;
}