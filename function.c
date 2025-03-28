//[Q - 3]Write a program to print the numbers from 1 to n:-
#include <stdio.h>
void Numbers();

int main()
{
  int n;
  printf("Enter the number you wants print the Number: ");
  scanf("%d",&n);
  for(int i = 1;i<= n;i++){
  Numbers();
}
  return 0;
}
void Numbers()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    printf("%d\n", i);
  }
}