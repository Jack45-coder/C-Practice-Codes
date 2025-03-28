// Write a c program to check whether a given number is a leap year or not using conditional operator:

#include<stdio.h>
int main(){
int year;
printf("Enter a year: ");
scanf("%d",&year);

if(year % 4 == 0 || year % 400 == 0 && year % 100 != 0){
    printf("%d is leap year",year);
}
else

    printf("%d is not leap year",year);

    return 0;
}