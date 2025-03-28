//[Q - 4] Take a number from the user and return the sum of all numbers up to the given number using a function:-
#include<stdio.h>
int sumOfAll();

int main(){
int sum = sumOfAll();
printf("Sum of all number = %d",sum);

  return 0;
}
int sumOfAll(){
  int num;
  int sum = 0;
  printf("Enter the number: ");
  scanf("%d",&num);
  for(int i = 1;i<=num;i++){
    sum = sum + i;
  }
   return sum;
}
