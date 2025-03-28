// Write a program to keep taking input from the user until he gives a negTIVE NUMBER:
#include<stdio.h>
int main(){
int num;
do
{
  printf("Enter a number: ");
  scanf("%d",&num);
}
 while (num >= 0);
  printf("You entered a negative number: %d\n",num);
  
  return 0;
}