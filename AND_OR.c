// Write a program to evaluate a logical expression involving && and || and explain the result:-

#include<stdio.h>
int main(){
int a;

printf("Enter a number: ");
scanf("%d",&a);

if(a == 0 && a < 10)
{
printf(" && true!");
}
else{
    printf(" && False!");
}
if(a == 0 || a < 10)
{
printf(" || True!");
}
else
{
    printf(" || False!");
}


    return 0;
}