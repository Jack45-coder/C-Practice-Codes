// Write a program to print the number 1 to 10 but skip whose divisible by 3 using continue keyword.
#include<stdio.h>
int main(){
int num;
printf("Enter the number: ");
scanf("%d",&num);
for(int i = 1;i <= num;i++){
  if(i % 3 == 0){
    continue;
  }
  printf("%d ",i);
}


  return 0;
}