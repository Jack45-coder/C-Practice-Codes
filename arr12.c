/*Qs 3- WAP to take an array from the user and separate the even and odd elements in two different arrays.
 INPUT - [2, 5, 6, 3, 8]
 O/P - even [2, 6, 8], odd [5, 3]
*/
#include <stdio.h>
void InputArray(int arr[], int size){
  printf("Enter %d elements:\n",size);
  for(int i = 0; i < size;i++){
    scanf("%d",&arr[i]);
  }
  printf("Even elements: ");
  for(int i = 0;i<size;i++){
    if(arr[i] % 2 == 0){
      printf("%d ",arr[i]);
    }
  }
  printf("\n");
  printf("Odd elements: ");
  for(int i = 0;i<size;i++){
    if(arr[i] % 2 != 0){
      printf("%d ",arr[i]);
    }
  }
}

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d",&n);
  int arr[n];
  InputArray(arr,n);
  return 0;
}