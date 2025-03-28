/* Qs - WAP to take input in an array using input function and print element using output function.
 */

#include <stdio.h>
void input(int arr[], int size)
{
  printf("Enter %d Elements\n", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void output(int arr[], int size)
{
  printf("Array elements are:\n");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(int argc, char const *argv[])
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  input(arr, n);
  output(arr, n);

  return 0;
}