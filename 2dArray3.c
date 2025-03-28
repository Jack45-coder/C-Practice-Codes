// WAP to add two matrix together.
// Input - first matrix = 3  6 second matrix = 6  9
//                        4  8               = 5  2
// O/P - 9  15
//       9  10
#include <stdio.h>
// void matrix1(int row, int col, int arr[][col]){
//   printf("%d Row & %d colmn:\n",row,col);
//   for(int i = 0;i < row;i++){
//     for(int j = 0;j < col;j++){
//       scanf("%d",&arr[i][j]);
//     }
//   }

// }
// void matrix2(int row, int col, int arr[][col]){
//   printf("%d Row & %d colmn:\n",row,col);
//   for(int i = 0;i < row;i++){
//     for(int j = 0;j < col;j++){
//       scanf("%d",&arr[i][j]);
//     }
//   }
// }

int main()
{
  // int row,col;
  // printf("Enter the size of row & colmn of First metrix:\n");
  // scanf("%d %d",&row,&col);
  // int arr[row][col];
  // matrix1(row,col,arr);
  // matrix2(row,col,arr);
  int row, col;
  printf("Enter the size of row & colmn:\n");
  scanf("%d %d", &row, &col);
  int arr[row][col];
  int arr2[row][col];
  printf("Enter the First array elements:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  printf("Enter the 2nd array elements:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &arr2[i][j]);
    }
  }
  int arr3[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      arr3[i][j] = arr[i][j] + arr2[i][j];
    }
    printf("\n");
  }
  printf("Addition of matrix:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", arr3[i][j]);
    }
    printf("\n");
  }
  return 0;
}