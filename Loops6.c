// 7: Write a program to take two numbers from a user one as base and second as a power calculate and print.
#include<stdio.h>
int main(){
int base, power;
int result = 1;
printf("Enter a base: ");
scanf("%d",&base);
printf("Enter a power: ");
scanf("%d",&power);

for (int i = 0; i < power; i++)
{
    result *= base;
}

printf("%d",result);

    return 0;
}