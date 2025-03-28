// Q5: Write a program to take a number from user and find the maximum and minimum digit of the number.
#include<stdio.h>
int main(){
int number, digit, max=0, min=9;

printf("Enter the number: ");
scanf("%d",&number);

if(number < 0){
    number = -number;
}
while(number > 0){
    digit = number % 10;
    if(digit > max){
       max = digit;
    }
    if(digit < min){
       min = digit;
    }
    number = number/10;
}
printf("Maximum Digit is %d\n",max);
printf("Minmum Digit is %d",min);

    return 0;
}