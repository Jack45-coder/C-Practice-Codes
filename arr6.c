// Qs- WAP to create an array and take input from the user and print there sum.
#include <stdio.h>
void input(int arr[], int num)
{
  printf("Enter the elements:\n");
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void sumOfArray(int arr[], int num)
{
  int sum = 0;
  for (int i = 0; i < num; i++)
  {
    sum = sum + arr[i];
  }
  printf("Total Sum of Array = %d", sum);
}

int main()
{
  int a = 5;
  int arr[a];
  input(arr, a);
  sumOfArray(arr, a);

  return 0;
}
