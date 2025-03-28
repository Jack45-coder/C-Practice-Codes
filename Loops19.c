//Write a program to print all prime numbers between 1 to n.

#include<stdio.h>
int main(){
int n;
int isprime = 1;
printf("Enter the number:");
scanf("%d",&n);
for(int i =2; i <= n;i++){
  isprime = 1;
  for(int j = 2;j * j <= i;j++){
    if(i % j == 0){
      isprime = 0;
    }
  }
  if(isprime){
    printf("%d\n",i);
  }
}


  return 0;
}