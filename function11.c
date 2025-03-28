// Qs - 4: Write a program to call a function that take two user inputs and returns the multiplication of the two numbers.
#include<stdio.h>
int Multi(){
  int num1,num2;
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  int product = num1*num2;
  printf("Multiplication of %d and %d = %d",num1,num2,product);
  return product;
}
int main(){


Multi();



  return 0;
}