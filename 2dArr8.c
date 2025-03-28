/*
Q3. Write a program to find the maximum and minimum element present
in the matrix.
INPUT – 4 5 9
3 15 6
2 1 10
OUTPUT – Maximum Num. = 15 Minimum Num. = 1
*/
#include <stdio.h>
void inputs2DArr(int row, int col, int matrix[][col])
{
  printf("Enter %d row & %d colomns:\n", row, col);
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }
}

int main()
{

  int row, col;
  printf("Enter the size of row & colomns:\n");
  scanf("%d %d", &row, &col);
  int matrix[row][col];
  inputs2DArr(row, col, matrix);
  printf("Your matrix:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }
  int max = 0, min = 9;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (matrix[i][j] > max)
      {
        max = matrix[i][j];
      }
      if (matrix[i][j] < min)
      {
        min = matrix[i][j];
      }
    }
  }
  printf("minimum element is: %d\n", min);
  printf("maximum element is: %d", max);

  return 0;
}