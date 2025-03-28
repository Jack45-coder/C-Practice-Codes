// QUESTION[2] write c program perform logical OR operation on two integers using the || operator:-

#include<stdio.h>
int main(){
int a,b;
printf("Enter the input in a: ");
scanf("%d",&a);

printf("Enter the input in b: ");
scanf("%d",&b);

int c = a || b;

printf("%d",c);

    return 0;
}