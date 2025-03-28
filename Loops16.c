// write a program to find the maximum and minimum digit from a given number.

#include<stdio.h>
int main(){
int num,digit;
int maxdigit = 0;
int mindigit = 9;

printf("Enter the number: ");
scanf("%d",&num);
if(num < 0){
  num = -num;
}
while(num > 0){
  digit = num % 10;
  if(digit > maxdigit){
    maxdigit = digit;
  }
  if(digit < mindigit){
    mindigit = digit;
  }
  num = num/10;
}
printf("Maximum Digit = %d\n",maxdigit);
printf("Minimum Digit = %d\n",mindigit);
return 0;
}