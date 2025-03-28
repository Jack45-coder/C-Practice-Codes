#include <stdio.h>
int main()
{
  // for (int i = 0; i < 5; i++)
  // {
  //   for (int j = 0; j < 4; j++)
  //   {
  //     if ((i+j) % 2 == 0)
  //     {
  //       printf("* ");
  //     }
  //     else{
  //       printf("# ");
  //     }
  //   }
  //   printf("\n");
  // }

  int n = 3;
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}