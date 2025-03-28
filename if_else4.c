// Write a 'C' Program to check wether a given integer is a multiple of 3 using if-else statement.[17oct2024]

#include<stdio.h>
int main()
{
  int num;
  printf("Enter an integer: ");
  scanf("%d",&num);

  if (num % 3 == 0)
  {
   printf("%d is a multiple of 3.\n", num);
  }
  else{

    printf("%d is not a multiple of 3.\n", num);
  }
    return 0;
}
