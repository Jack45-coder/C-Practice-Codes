#include <stdio.h>
int main()
{
  int m, n;
  printf("Enter the size of row and colomns:\n");
  scanf("%d %d", &m, &n);
  int arr[m][n];
  printf("Entre the elements:\n");
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  int minr = 0;
  int maxr = m - 1;

  int minc = 0;
  int maxc = n - 1;

  int tne = m * n;
  int c = 0;

  while(c < tne){
     // print the minimum row
     for(int j = minc; j <= maxc;j++){
      printf("%d  ",arr[minr][j]);
      c++;
     }
     minr++;
     if(c >= tne) break;

     // print the maximum col
     for(int i = minr;i <= maxr;i++){
      printf("%d  ",arr[i][maxc]);
      c++;
     }
     maxc--;
     if(c >= tne) break;

     // print the maximum row
     for(int j = maxc; j >= minc;j--){
      printf("%d  ",arr[maxr][j]);
      c++;
     }
     maxr--;
     if(c >= tne) break;

     // print the minimum col
     for(int i = maxr;i >= minr; i--){
      printf("%d  ",arr[i][minc]);
      c++;
     }
     minc++;
     if(c >= tne) break;
  }

  return 0;
}