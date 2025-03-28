// Q2. Write a program to check if the given two matrix are equal or not.
// INPUT – Frist matrix = 3 2 Second matrix = 1 2
//                        1 5                 3 5
// OUTPUT – Both Matrix are not equal .

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
int areMatrixEqual(int row, int col, int row2, int col2, int matrix[][col], int matrix2[][col2]){
  if(row != row2 && col != col2){
    return 0;
  }
  for(int i = 0; i < row;i++){
    for(int j = 0; j < col;j++){
      if(matrix[i][j] != matrix2[i][j]){
        return 0;
      }
    }
  }
  return 1;
}

int main()
{
  int row, col,row2,col2;
  printf("Enter the size of row & colomns for 1st matrix:\n");
  scanf("%d %d", &row, &col);
  int matrix[row][col];
  inputs2DArr(row, col, matrix);
   printf("Enter the size of row & colomns for 2nd matrix:\n");
  scanf("%d %d", &row2, &col2);
  int matrix2[row][col];
  inputs2DArr(row,col,matrix2);
  if(areMatrixEqual(row,col,row2,col2,matrix,matrix2)){
    printf("Both matrix are equal.");
  }
  else{
     printf("Both matrices are NOT equal.\n");
  }

  return 0;
}