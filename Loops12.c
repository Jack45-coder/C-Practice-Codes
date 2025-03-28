// Write a to take two numbers from the user and print the average of all numbers between them.

#include<stdio.h>
int main(){
int num, num2;
int count = 0;
int sum = 0;
int average;
printf("Enter the 1st number:");
scanf("%d",&num);
printf("Enter the 2nd number:");
scanf("%d",&num2);
for(;num <= num2;num++){
   sum += num;
   count++;
}
average = sum/count;
printf("Average = %d",average);



  return 0;
}