// Write a c program to take a two integers from user and swap their variable:

#include<stdio.h>
int main()
{
 int a,b,c;

 // initialize the variables:
 printf("Enter the value of a: ");
 scanf("%d",&a);
 printf("Enter the value of b: ");
 scanf("%d",&b);

 // Print the initial value:
printf("Before swapping: a = %d, b = %d\n", a, b );

// swap the value:
c = a;
a = b;
b = c;

// Print the swap value:
printf("After swapping: a = %d, b = %d\n", a, b);


    return 0;
}