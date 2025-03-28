// Write a program to take number from user and print this pattern like this:
/*
   1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
  int i;
  int j;
  for(i = 1; i <= 5;i++){
    for(j = 1;j <= i;j++){
      printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}