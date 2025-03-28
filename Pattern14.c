/* PRINT LIKE THIS
       *
    *  *  *
 *  *  *  *  *
    *  *  *
       *
 */
#include <stdio.h>
int main()
{
  int n = 3;
  for(int i = 1;i <= n*2-1;i++){
    for(int j = 1;j<=n-i;j++){
      printf("  ");
    }
    for(int k = 1;k <=i*2-1;k++ ){
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}