// Write a program to swap two variables without using a third variable,using bitwise XOR:-

#include<stdio.h>
int main(){
int a,b;
printf("Enter the first number: ");
scanf("%d",&a);

printf("Enter the second number: ");
scanf("%d",&b);
printf(" Before swap %d,%d ",a,b);

a = a^b;
b = a^b;
a = a^b;

printf(" After swap %d,%d ",a,b);

    return 0;
}