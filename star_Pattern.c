#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
  int i;
  int j;
  for(i = 1;i <= 3;i++){
    for(j = 1;j <= i;j++){ 
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}