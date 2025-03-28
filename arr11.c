/*Qs 2- WAP to create an array and take input from the user and print the sum of even numbers and sum of even numbers.
INPUT - [2, 8,10,1,3]
O/P   - Sum of even elements = 20,sum of even numbers = 4
*/

#include <stdio.h>
int inputArray(int arr[], int size)
{
  int sum = 0, count = 0;
  printf("Enter the elements:\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0)
    {
      sum = sum + arr[i];
      count++;
    }
  }
  printf("Count of even elements: %d\n", count);
  return sum;
}

int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  int total = inputArray(arr, n);
  printf("sum of even elements: %d", total);

  return 0;
}