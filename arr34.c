// 27.Write a program to cyclically rotate an array by one?
// Input : { 1, 2, 3, 4, 5 }
// Output : { 5, 1, 2, 3, 4 }
#include <stdio.h>
void inputsArr(int arr[], int n){
  printf("Enter %d elements:\n",n);
  for(int i = 0; i < n;i++){
    scanf("%d",&arr[i]);
  }
}

int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int arr[n];
  inputsArr(arr, n);
  int lastdigit = arr[n-1];
  for(int i = n-1;i > 0;i--){
    arr[i] = arr[i-1];
  }
  arr[0] = lastdigit;
for(int i = 0;i < n;i++){
  printf("%d, ",arr[i]);
}
  return 0;
}
