// Write a C program to check whether a given year ia a leap year uding a ternary operator.

#include<stdio.h>
int main(){
int year;
printf("Enter the year you want check leap year or not leap year: ");
scanf("%d",&year);

(year % 4 == 0 || year % 400 == 0 && year % 100 != 0) ? 
printf("%d year is leap year",year): printf("%d is not a leap year",year);





    return 0;
}