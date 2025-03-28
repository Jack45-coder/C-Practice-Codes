/* PRINT LIKE THIS
     * # * # *            Row
     # * # * #            |
     * # * # *            |
    # * # * #             |
                          V------------>Colm
*/
#include <stdio.h>
int main()
{
  int i;
  int j;
  for (i = 1; i <= 4; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (j % 2 != 0)
      {
        printf("* ");
      }
      else
      {
        printf("# ");
      }
    }
    printf("\n");
  }

  return 0;
}