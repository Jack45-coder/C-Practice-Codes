// Write a program to take two numbers from the user and print all prime numbers between them.

#include<stdio.h>
int main(){
int num1,num2;
int isprime = 1;
printf("Enter the number: ");
scanf("%d",&num1);

printf("Enter the number: ");
scanf("%d",&num2);


for(int i = num1; i <= num2;i++){
  for(int j = 2;j * j <= i;j++){
    if(i % j == 0){
      isprime = 0;
    }
  }
  if(isprime){
    printf("%d is a prime number\n",i);
  }
  else{
    printf("%d is not a prime number\n",i);
  }
  isprime = 1;
}

  return 0;
}