// WAP to take a number from user and reverse the numer.
#include<stdio.h>
void ReverseNum(int num){
  if(num == 0){
    return;
  }
  printf("%d",num % 10);
  return ReverseNum(num/10);
}
int main(){
int n;
printf("Enter the number: ");
scanf("%d",&n);
printf("Reversed Number: ");
ReverseNum(n);


  return 0;
}