// WAP to take input ina 2d array and check whether the given number is present the matrix or not.
// 1 2 3
// 4 5 6
// num 5:- O/P - [1,1] at index
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
void inputs2D(int n, int n2, int arr[][n2])
{
  printf("Enter %d row & %d colomn:\n", n, n2);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}
void output(int n, int n2, int arr[][n2])
{
  printf("Elements Are:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      printf("%d   ", arr[i][j]);
    }
    printf("\n");
  }
}

void findIndex(int n, int n2, int arr[][n2])
{
  int number;
  printf("Enter the number: ");
  scanf("%d", &number);
  int found = 0; // To check if the number is found
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      if (arr[i][j] == number)
      {
        printf("Number %d found at index [%d,%d]\n", number, i, j);
        found = 1; // Mark as found
      }
    }
  }

  if (!found)
  {
    printf("Number %d not found in the matrix.\n", number);
  }
}
int main()
{
  int n1, n2;
  printf("Enter the size of row and  colomn for array:\n");
  scanf("%d %d", &n1, &n2);
  int arr[n1][n2];
  inputs2D(n1, n2, arr);
  output(n1, n2, arr);
  findIndex(n1, n2, arr);

  return 0;
}