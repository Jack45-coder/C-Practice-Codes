/*
 Q8. Write a program to take an array from the user and arrange the
 elements in ascending order.
 INPUT- arr = [ 2,9,5,0,3 ]
 OUTPUT- arr = [ 0,2,3,5,9 ]
*/
#include <stdio.h>
void inputArray(int arr[], int n)
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void ascendingArr(int arr[], int n){
  int swap;
  printf("Ascending Order: ");
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n-1;j++){
      if(arr[j] > arr[j+1]){
        swap = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = swap; 
      }
    }
  }
  for(int i = 0;i < n;i++){
    printf("%d ",arr[i]);
  }
}

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputArray(arr, n);
  ascendingArr(arr,n);
  return 0;
}