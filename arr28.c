// 19.WAP to take input in array and delete  kth element in array?
// input - [3,4,8,2] •k=2.
//  output [ 3,8,2 ]

#include <stdio.h>
void inputsArr(int n, int arr[]){
  printf("Enter %d elements:\n",n);
  for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }
}
void DeleteKth(int n, int arr[]){
  int num;
  printf("Enter the number you want dlt: ");
  scanf("%d",&num);
  for(int i = num-1;i < n;i++){
    arr[i] = arr[i+1];
  }
  for(int i = 0;i < n-1;i++){
    printf("%d ",arr[i]);
  }
}
int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int arr[n];
  inputsArr(n,arr);
  DeleteKth(n,arr);

  return 0;
}