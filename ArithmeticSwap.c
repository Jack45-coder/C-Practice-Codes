// QUESTION[4] Write a C program to swap two integers without using third variable using airtmetic operators:-

#include<stdio.h>
int main(){
int a,b;

printf("Enter the input in a: ");
scanf("%d",&a);

printf("Enter the input in b: ");
scanf("%d",&b);

// after swapping;
a=a+b;
b=a-b;
a=a-b;
printf("After swap %d %d",a,b);




    return 0;
}