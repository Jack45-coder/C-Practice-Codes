// Qs : WAP to find n number of the factorial.
#include<stdio.h>
int factorial(int num){
  if(num == 0){
    return 1;
  }
  return num * factorial(num-1);
}
int main(){
int n;
printf("Enter the number: ");
scanf("%d",&n);
int result = factorial(n);
printf("Factorial of this %d is %d",n,result);



  return 0;
}