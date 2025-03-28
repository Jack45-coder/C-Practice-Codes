// write a program to read 5 integers and display them in reverse order.

#include <stdio.h>
int main()
{
  int arr[5];
  printf("Enter Five Inputs:\n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Reversed inputs:\n");
  for (int i = 4; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}