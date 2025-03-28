/* PRINT LIKE THIS:
   a
   b  c
   d  e  f
*/
#include<stdio.h>
int main(){
int i, j;
char ch = 'a';
for(i = 1;i<=3;i++){
  for(j = 1;j<=i;j++){
    printf("%c ",ch++);
  }
  printf("\n");
}
  return 0;
}