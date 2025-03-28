// WAP to print the transpose of the matrix entered by the user.(Leetcode - 867)
#include <stdio.h>
void inputsMatrix(int r, int c, int mat[][c])
{
  printf("Enter the elements:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
}
void OP(int r, int c, int mat[][c]){
  printf("Your Matrix:\n");
   for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d  ", mat[i][j]);
    }
    printf("\n");
  }
}
void transposeMatrix(int r, int c, int mat[][c])
{
  for (int i = 0; i < c; i++)
  {
    for (int j = 0; j < r; j++)
    {
      printf("%d  ",mat[j][i]);
    }
    printf("\n");
  }
}

int main()
{
  int r,c;
  printf("Enter the size of row & colmns:\n");
  scanf("%d %d",&r,&c);
  int mat[r][c];
  inputsMatrix(r,c,mat);
  OP(r,c,mat);
  transposeMatrix(r,c,mat);


  return 0;
}