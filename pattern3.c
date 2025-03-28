// Write a program to take a input from user and print following this series:
/*
   input 5 :-
   O/P :-
   1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15
*/
#include <stdio.h>

int main()
{
  int n = 1; // for number increase one by one.
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  for (int i = 0; i < num; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%d ", n++);
    }
    printf("\n");
  }

  return 0;
}