// Write a program to input two integers and compare them using relational operators:-

#include<stdio.h>
int main(){
int a;
printf("Enter a number for a: ");
scanf("%d",&a);

int b;
printf("Enter a number for b: ");
scanf("%d",&b);

if (a == b)
{
    printf("Both num a = %d and b = %d is equal ",a,b);
}
else if (a < b)
{
    printf("A = %d is less then B = %d",a,b);
}
else if (a > b)
{
    printf("A = %d is grather then B = %d",a,b);
}
else
{
    printf("not equal");
}

return 0;
}