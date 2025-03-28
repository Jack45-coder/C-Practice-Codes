#include<stdio.h>
void inputs(int r,int c,int arr[][c]){
  printf("Enter %d row & %d col:\n",r,c);
  for(int i = 0; i < r;i++){
    for(int j = 0; j < c;j++){
      scanf("%d",&arr[i][j]);
    }
  }
}
void multi(int r, int c,int c2, int arr[][c], int arr2[][c2], int result[][c2]){
  for(int i = 0; i < r;i++){
    for(int j = 0; j < c2; j++){
    result[i][j] = 0;
  }
}
for(int i= 0; i < r; i++){
  for(int j = 0;j < c2;j++){
    for(int k = 0; k <c;k++){
      result[i][j] += arr[i][k]*arr2[k][j];
    }
  }
}
}
void printResult(int r, int c, int result[][c]){
  printf("Resultanmt matrix:\n");
  for(int i = 0; i < r;i++){
    for(int j = 0; j < c; j++){
      printf("%d ",result[i][j]);
    }
    printf("\n");
  }
}
int main(){
int r,c,r2,c2;
printf("Enter rows and columns for first matrix:\n");
scanf("%d %d", &r, &c);

printf("Enter rows and columns for second matrix:\n");
scanf("%d %d", &r2, &c2);

int arr1[r][c], arr2[r2][c2], result[r][c2];

  inputs(r, c, arr1);
  inputs(r2, c2, arr2);
  multi(r, c, c2, arr1, arr2, result);
  printResult(r, c2, result);

  return 0;
}