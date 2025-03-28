// QUESTION[1] write a c program logical AND operation on two integers using the && operator:-

#include<stdio.h>
int main(){
int a,b;
printf("Enter the input in a: ");
scanf("%d",&a);

printf("Enter the input in b: ");
scanf("%d",&b);

int c = a && b;

printf("%d",c);

return 0;
}