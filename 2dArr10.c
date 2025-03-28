/*
Q5. Write a program to find the first repeating element in the matrix.
INPUT – 1 5 2
3 15 4
6 7 15
OUTPUT – 15 is repeated count = 2
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
  int count= 0;
  for(int i = 0;i < row;i++){
    for(int j = i+1;j < col;j++){
      if(mat[i][j] == )

    }
  }

  return 0;
}