// WAP Given a matix having 0-1 only, find thw row with the  maximum number of 1's:
#include <stdio.h>
void inputsMatrix(int r, int c, int mat[][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
}
void Check1s(int r, int c, int mat[][c]){
  int maxCount = 0;
  int row = -1;
  for(int i = 0; i < r; i++){
    int count = 0;
    for(int j = 0;j < c; j++){
      if(mat[i][j] == 1){
        count++;
      }
    }
      if(maxCount < count){
        maxCount = count;
        row = i;
      }
      printf("\n");
    }
    printf("Row %d",row+1);
  }

int main()
{
  int r = 4, c = 5;
  printf("Enter the elements:\n");
  int mat[r][c];
  inputsMatrix(r,c,mat);
  Check1s(r,c,mat);

  return 0;
}