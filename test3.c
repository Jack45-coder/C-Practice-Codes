#include <stdio.h>
void inputsArr(int r, int c, int arr[][c])
{
  printf("Enter the elements:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}
void mergeArray(int r, int c, int arr[][c], int arr2[][c], int merged[][c])
{

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      merged[i][j] = arr[i][j] + arr2[i][j];
      printf("%d ", merged[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int r, c;
  printf("Enter the size of row nd colomns:\n");
  scanf("%d %d", &r, &c);
  int arr[r][c];
  inputsArr(r, c, arr);
  int arr2[r][c];
  inputsArr(r, c, arr2);
  int merged[r][c];
  mergeArray(r, c, arr, arr2, merged);

  return 0;
}