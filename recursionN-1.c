// Qs - WAP to print the number n to 1.
#include<stdio.h>
int printNum(int num){
  if(num == 0){
    return 1;
  }
  printf("%d\n",num);
  return printNum(num-1);
}
int main(){
int n;
printf("Enter the number: ");
scanf("%d",&n);
printNum(n);


  return 0;
}