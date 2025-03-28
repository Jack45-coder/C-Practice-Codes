
#include <stdio.h>
void inputs1(int r, int c, int arr[][c])
{
  printf("Enter %d row and %d colomn:\n", r, c);
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}
void sum(int r, int c, int arr[][c])
{
  int sum = 0;
  for (int i = 0; i < r - 1; i++)
  {
    for (int j = 1; j < c; j++)
    {
      sum = sum + arr[i][j];
    }
  }
  printf("Sum of (l1,r1) and (l2,r2) and (l1,r1) to ( l2,r2)%d = ", sum);
}
int main()
{

  int r, c;
  printf("Enter the size of row and  colomn for array:\n");
  scanf("%d %d", &r, &c);
  int arr[r][c];
  inputs1(r, c, arr);
  int maxSum = 0;
  int rI;
  for (int i = 0; i < r; i++)
  {
    int sum = 0;
    for (int j = 0; j < c; j++)
    {
      sum = sum + arr[i][j];
    }
    if (sum > maxSum)
    {
      maxSum = sum;
      rI = i;
    }
  }
  printf("maximum sum %d and index %d", maxSum, rI + 1);

  return 0;
}