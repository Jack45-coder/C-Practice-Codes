// WAP to change the given n*n matrix to its transpose.(leetcode)
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
void transpose(int r, int c, int mat[][c]){
  for(int i = 0; i < r;i++){
    for(int j =i; j < c; j++){
      int temp = mat[i][j];
      mat[i][j] = mat[j][i];
      mat[j][i] = temp;
      printf("%d  ",mat[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int r,c;
  printf("Enter the size of row and colomns:\n");
  scanf("%d %d",&r,&c);
  int mat[r][c];
  inputsMatrix(r,c,mat);
  transpose(r,c,mat);

  return 0;
}