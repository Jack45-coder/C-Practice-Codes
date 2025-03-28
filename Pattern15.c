/* PRINT LIKE THIS:
-------------------
      * * * * *
    * * * * *
   * * * * *
  * * * * *
 * * * * *
-----------
*/

#include <stdio.h>

int main() {
  int num = 5;
  for(int i = 0;i < num;i++){
      for(int j =1;j <= num - i - 1;j++){
          printf(" ");
      }
      for(int k = 1;k <= num;k++){
          printf("* ");
      }
      printf("\n");
  }

    return 0;
}