/*
Q10. Write a program to delete the given element from the array.
 INPUT- arr = [ 3,7,9,2,4 ]
 OUTPUT- arr = [ 3,7,9,4 ]
 Num=2
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
void indDeletion(int arr[], int n, int element){
  for(int i = 0;i < n;i++){
    if(element == arr[i]){
      for(int j = i;j < n-1;j++){
        arr[j] = arr[j+1];
      }
    }
  }
  printf("Array: ");
  for(int i = 0; i< n-1;i++){
    printf("%d ",arr[i]);
  }
}
int main(){
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputArray(arr, n);
  int element;
  printf("Enter the elements: ");
  scanf("%d",&element);
  indDeletion(arr,n,element);
  return 0;
}