// Q3: Write a program to take a mumber from the user and find the first and last digit of the number:
#include<stdio.h>
int main(){
int num, firstDigit, lastDigit;
printf("Enter a number: ");
scanf("%d",&num);

lastDigit = num % 10;
printf("Last Digit = %d\n",lastDigit);

firstDigit = num;
while(firstDigit >= 10){
    firstDigit = firstDigit/10;
}
printf("First Digit = %d",firstDigit);
    return 0;
}