/*PRINT LIKE THIS:
  INPUT - 5
   1 2 3 4 5 5 4 3 2 1
   1 2 3 4 * * 4 3 2 1
   1 2 3 * * * * 3 2 1
   1 2 * * * * * * 2 1
   1 * * * * * * * * 1
*/
#include<stdio.h>
int mixPattern(int num);
int main(){
int Num;
printf("Enter the inputs: ");
scanf("%d",&Num);
mixPattern(Num);


  return 0;
}
int mixPattern(int num){
  for(int i = 1;i<=num;i++){
    for(int j = 1;j<=num-i+1;j++){
      printf("%d ",j);
    }
    for(int k = 1;k<=2*i-2;k++){
      printf("* ");
    }
    for(int j = num-i+1;j>=1;j--){
      printf("%d ",j);
    }
    printf("\n");
  }
}
