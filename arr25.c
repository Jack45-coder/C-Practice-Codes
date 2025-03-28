// WAP to take input in a 2d array and print sum of elements.
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
void outputs2D(int n, int n2, int arr[][n2]){
  printf("%d row and %d colmn Array:\n",n,n2);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int n, n2;
  printf("Enter the size of row and colomn:\n");
  scanf("%d %d", &n, &n2);
  int arr[n][n2];
  inputs2D(n, n2, arr);
  outputs2D(n, n2, arr);
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      sum = sum + arr[i][j];
    }
  }
  printf("Total sum of elements: %d",sum);


  return 0;
}