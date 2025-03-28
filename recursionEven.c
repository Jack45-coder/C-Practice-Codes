// WAP Print To take a number from user and print

#include <stdio.h>
int printEvenNum(int num){
  if(num == 0){
    return 1;
  }
  if(num % 2 == 0){
  printf("Even Numbers: %d\n",num);
  }
  return num - printEvenNum(num - 1);
}
int oddNum(int num){
  if(num == 0){
    return 1;
  }
  if(num % 2 != 0){
    printf("Odd Numbers: %d\n",num);
  }
  return num - oddNum(num - 1);
}

int main()
{
  int a;
 printf("Enter the number: ");
 scanf("%d",&a);
 printEvenNum(a);
 oddNum(a);
}