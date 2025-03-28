/*
Q7. Write a program to reverse the elements of an array.
 INPUT- arr = [ 2,7,9,5,6 ]
 OUTPUT- arr=[ 6,5,9,7,2 ]
*/
#include <stdio.h>
void inputArray(int arr[], int n)
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void reverseArray(int arr[], int n)
{
  printf("Reverse Arrar: ");
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }
}

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputArray(arr, n);
  reverseArray(arr, n);

  return 0;
}