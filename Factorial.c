// 6: Write a c program to takes a input from user and find factorial.
// input 5 O/P = 120.
#include<stdio.h>
int main(){
int num;
double fact = 1;

printf("Enter a number: ");
scanf("%d",&num);

for (int i = 1; i <= num; i++)
{
    fact = fact *i;
}
printf("Factorial = %.2lf",fact);


    return 0;
}