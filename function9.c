// Qs - 2 : Write a program to call a function that prints the multiplication of two numbers.
#include<stdio.h>
void multiplication(){
  int a,b;
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);

  int result = (a*b);
  printf("Multiplication result: %d\n", result);
}
int main(){
 multiplication();
  return 0;
}