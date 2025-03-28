// Qs- WAP to take a input from user and reverse the inputs.

#include <stdio.h>
int Inputs(int arr[], int size)
{
  printf("Enter the %d Elements:\n", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
}
int ReverseArray(int arr[], int size)
{
  printf("Reverse Array = ");
  for (int i = 4; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }
}

int main()
{
  int n;
  printf("Enter the size of Elements: ");
  scanf("%d", &n);
  int arr[n];
  Inputs(arr, n);
  ReverseArray(arr, n);

  return 0;
}