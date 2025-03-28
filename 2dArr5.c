#include <stdio.h>
void inputs(int r,int c,int arr[][c]){
  printf("Enter %d row & %d col:\n",r,c);
  for(int i = 0; i < r;i++){
    for(int j = 0; j < c;j++){
      scanf("%d",&arr[i][j]);
    }
  }
}
int countNum(int r, int c, int arr[][c]){
  int number, count = 0;
  printf("Enter the number: ");
  scanf("%d",&number);
  for(int i = 0; i < r;i++){
    for(int j = 0; j < c;j++){
      if(number == arr[i][j])
      count++;
    }
  }
  printf("Count of this number is %d",count);
  return count;
}
int main()
{
  int r,c;
  printf("Enter the size of row and colomn:\n");
  scanf("%d %d",&r,&c);

  int arr[r][c];
  inputs(r,c,arr);
  countNum(r,c,arr);

  return 0;
}