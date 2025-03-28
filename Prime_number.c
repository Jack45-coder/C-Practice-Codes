// Write a program to take a number from the user and check whether the number is prime or not.

#include<stdio.h>
int main(){
int num;
int isprime = 1;
printf("Enter the number: ");
scanf("%d",&num);
for(int i = 2;i * i <= num;i++){
    if(num % i == 0){
      isprime = 0;
    }
  }
  if(isprime){
    printf("%d is a prime number",num);
  }
  else{
    printf("%d is not a prime number",num);
  }

  return 0;
}