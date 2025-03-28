// Write a C program to take a number from user and print:  1         to         5
// EX- user say 1 and print = 

#include<stdio.h>
int num;
int main(){
printf("Enter a number:");
scanf("%d",&num);
if (num==1)
{
    printf("One");
}
if (num==2)
{
    printf("Two");
}
if (num==3)
{
     printf("THree");
}
if (num==4)
{
     printf("Four");
}
if (num==5)
{
  printf("Five");
}
if (num>5 || num<1)
{
    printf("invalid");
}
return 0;

}