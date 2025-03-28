// Find Duplicate Elements
// Write a program to find all duplicate elements in an array.
// Input: {1, 2, 3, 2, 4, 5, 1}
// Output: 1, 2
#include <stdio.h>
void inputs(int arr[], int n)
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void findDuplicate(int arr[], int n)
{
  printf("Duplicate elements in the array are: ");
  int found = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        printf("%d ", arr[i]);
        found = 1;
        break;
      }
    }
  }
  if (!found)
  {
    printf("None duplicate");
  }
}
int main()
{
  int size;
  printf("Enter the size of array: ");
  scanf("%d", &size);
  int arr[size];
  inputs(arr, size);
  findDuplicate(arr, size);
  return 0;
}