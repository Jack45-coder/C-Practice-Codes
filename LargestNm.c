// Write a program to find the largest of two numbers using [if else]
#include<stdio.h>
int main(){
int a,b;
printf("Enter the number for a: ");
scanf("%d",&a);

printf("Enter the number for b: ");
scanf("%d",&b);

if (a > b)
{
    printf("A is largest");
}
else{
    printf("B is largest");
}

    return 0;
}