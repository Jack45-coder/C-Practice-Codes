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

//qs- 1: WAVE MATRIX 1st FUNCTION
void printWave_matrix(int r, int c, int mat[][c])
{
  printf("Wave matrixx:\n");
  for (int i = 0; i < r; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < c; j++)
      {
        printf("%d  ", mat[i][j]);
      }
    }
    if (i % 2 != 0)
    {
      for (int j = c - 1; j >= 0; j--)
      {
        printf("%d  ", mat[i][j]);
      }
    }
    printf("\n");
  }
}

//qs- 2: WAVE MATRIX 2nd FUNCTION
void printWave_matrix2(int r, int c, int mat[][c])
{
  printf("Wave 2 matrix:\n");
  for (int j = 0; j < c; j++)
  {
    if (j % 2 == 0)
    {
      for (int i = r-1;i >= 0;i--)
      {
        printf("%d  ",mat[i][j]);
      }
    }
    else{
      for(int i = 0; i < r;i++){
        printf("%d  ",mat[i][j]);
      }
    }
    printf("\n");
  }
}

// qs- 3: WAVE MATRIX 3rd FUNCTION
void printWave_matrix2(int r, int c, int mat[][c])
{
  printf("Wave 2 matrix:\n");
  for (int j = 0; j < c; j++)
  {
    if (j % 2 == 0)
    {
      for (int i = r-1;i >= 0;i--)
      {
        
        printf("%d  ",mat[i][j]);
      }
    }
    else{
      for(int i = 0; i < r;i++){
        printf("%d  ",mat[i][j]);
      }
    }
    printf("\n");
  }
}

int main()
{
  int r, c;
  printf("Enter the size of row & colmns:\n");
  scanf("%d %d", &r, &c);
  int mat[r][c];
  inputsMatrix(r, c, mat);
  printWave_matrix(r, c, mat);
  printWave_matrix2(r, c, mat);
  return 0;
}