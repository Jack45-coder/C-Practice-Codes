// 13.WAP to find 2nd minimum element in array?
// input - [2,6,3,9]
// output - min =3

#include <stdio.h>
void inputsArr(int n, int arr[])
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}
int find2ndMin(int n, int arr[])
{
  int swap;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n-1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;
      }
    }
  }
  for(int i = 0; i<n;i++){
    printf("%d  ",arr[i]);
  }
  printf("\n");
  printf("Second Minimum: %d", arr[n - 2]);
}

int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  find2ndMin(n, arr);
  return 0;
}