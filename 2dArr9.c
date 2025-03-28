/*
Q4. Write a program to find the sum of each row and each column of a
matrix.
INPUT – 12 5
         9 7
OUTPUT – Sum of row 1 = 17
Sum of row 2 = 16
Sum of Column 1 = 21
*/
#include <stdio.h>
void inputs2DArr(int row, int col, int mat[][col])
{
  printf("Enter %d row & %d colomns:\n", row, col);
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
}
void matrix(int row, int col, int mat[][col]){
  printf("Your matrix:\n");
 for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int row, col;
  printf("Enter the size of row & colomns:\n");
  scanf("%d %d", &row, &col);
  int mat[row][col];
  inputs2DArr(row, col, mat);
  matrix(row,col,mat);
  printf("Sum of 1st row:\n");
  for (int i = 0; i < row; i++)
  {
    int sum = 0;
    for(int j = 0; j < col; j++){
      sum = sum + mat[i][j];
    }
     printf("%d\n",sum);
  }
  printf("Sum of colomn:\n");
  for(int i = 0;i < col;i++){
    int sum = 0;
    for(int j =0; j < row;j++){
      sum = sum + mat[j][i];
    }
      printf("%d\n",sum);
  }

  return 0;
}