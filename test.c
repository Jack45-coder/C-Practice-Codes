#include <stdio.h>
void inputs(int arr[], int n)
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void inputs2(int arr2[], int n2)
{
  printf("Enter %d elements:\n", n2);
  for (int i = 0; i < n2; i++)
  {
    scanf("%d", &arr2[i]);
  }
}
int main()
{

  int n;
  printf("Enter the size for array: ");
  scanf("%d", &n);
  int arr[n];

  inputs(arr, n);
  printf("Elements output: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("Reverse element output: ");
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("Even numbers: ");
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
    {
      printf("%d ", arr[i]);
    }
  }
  printf("\n");
  printf("Odd numbers: ");
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 != 0)
    {
      printf("%d ", arr[i]);
    }
  }
  printf("\n");
  int multi = 1;
  for (int i = 0; i < n; i++)
  {
    multi = multi * arr[i];
  }
  printf("Product of all elements: %d", multi);
  printf("\n");
  int max = arr[0], min = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  printf("Maximum of this array: %d\n", max);
  printf("Minimum of this array: %d", min);
  printf("\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;
      }
    }
  }
  printf("Ascending order: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        int swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;
      }
    }
  }
  printf("Decending order: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  // inputs(arr, n);
  int n2;
  printf("Enter the size of array: ");
  scanf("%d", &n2);
  int arr2[n2];
  inputs2(arr2, n2);
  int merge[n + n2];
  for (int i = 0; i < n; i++)
  {
    merge[i] = arr[i];
    for (int j = 0; j < n2; j++)
    {
      merge[i + j] = arr[j];
    }
  }
  printf("Merged array: ");
  for (int k = 0; k < n + n2; k++)
  {
    printf("%d", merge[k]);
  }

  return 0;
}