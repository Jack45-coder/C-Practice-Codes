// Write a 'C' program to check whether a given year is aleap year or not using if-else.[18oct2024]

#include<stdio.h>
int main()
{
   int year; 
   printf("Enter a year : ");
   scanf("%d",&year);
   if (year % 4 == 0)
   {
    printf("%d is a leap year.\n", year);
   }
   else{

    printf("%d is not a leap year.\n", year);
   }
    return 0;
}
