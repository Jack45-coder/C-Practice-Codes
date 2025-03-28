// WAP to take input in a 2d array and check whether the given number is present in the matrix or not.
// input row = 2 Colomn = 2 num = 4
// O/P - the given number 4 is present in the araay.

#include <stdio.h>
void inputs(int row, int colmn, int arr[][colmn])
{
  printf("Enter %d Row & %d colmn:\n",row,colmn);
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colmn; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}
void output(int row, int colmn, int arr[][colmn])
{
  printf("your arrays are:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colmn; j++)
    {
      printf("%d  ", arr[i][j]);
    }
    printf("\n");
  }
}
void findgArray(int row, int colomn, int arr[][colomn])
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  int found = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colomn; j++)
    {
      if (arr[i][j] == num)
        {
          printf("the given number %d is present in the araay",num);
          found = 1;
          break;
        }
    }
    if(found){
      break;
    }
  }
  if(!found){
    printf("the given number is not present in the araay");
  }
}
int main()
{
  int n, n2;
  printf("Enter the number of rows nd colmns:\n");
  scanf("%d %d",&n,&n2);
  int arr[n][n2];
  inputs(n,n2,arr);
  output(n,n2,arr);
  findgArray(n,n2,arr);

  return 0;
}