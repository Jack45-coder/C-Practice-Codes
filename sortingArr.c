// SHORTING IN ACENDING:-

#include<stdio.h>
void sortingArray(int arr[], int size){
  int swap;
  printf("Enter %d elements:\n",size);
  for(int i = 0;i < size;i++){
      scanf("%d",&arr[i]);
  }
  printf("Sorting assending array: ");
  for(int i = 0;i < size-1;i++){
    for(int j = 0; j < size-i-1;j++){
      if(arr[j] > arr[j+1]){
        swap = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = swap;
      }
    }
  }
  for(int i = 0; i< size;i++){
    printf("%d ",arr[i]);
  }
}

int main(){
int n;
printf("Enter the size of Array: ");
scanf("%d",&n);
int arr[n];
sortingArray(arr,n);

  return 0;
}