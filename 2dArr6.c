/*
Q1. Write a program to take input in a 2d array and find the product of
elements.
INPUT – row = 2 column = 3
1 , 2 , 3
6 , 5 , 4
OUTPUT – product = 720.
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
  int multi = 1;
  printf("Your matrix is:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      multi = multi * matrix[i][j];
    }
  }
  printf("Product of the matrix: %d",multi);

  return 0;
}