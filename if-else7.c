// Write a 'C' Program to check whether a number is even or odd.[18 oct 2024]

#include<stdio.h>
int main()
{
 int num;
printf("Enter a number: ");
scanf("%d",&num);


 if (num % 2 == 0)
 {
    printf("%d is a even number.\n",num);
 }
 else{
    printf("%d is odd number.\n",num);
 }







    return 0;
}