// 25.WAP to take an array n size and take  A number from user and check number
// that number is present or not present in the array?
// [ 4,21,76,1,9] •k= 76 - 76 is present.
// [8,32,54,65] •k=25 - 25 is not present.

#include<stdio.h>
void inputsArr(int arr[], int n){
  printf("Enter %d elements:\n");
  for(int i = 0; i < n;i++){
    scanf("%d",&arr[i]);
  }
}
void findElements(int arr[], int n){
  int num;
  int found = 0;
  printf("Enter the elements: ");
  scanf("%d",&num);
  for(int i = 0; i < n; i++){
      if(num == arr[i]){
         printf("%d is present.",num);
         found = 1;
         break;
      }
  }
  if(!found){
    printf("%d is not present!",num);
  }
}
int main(){
int n = 5;
int arr[n];
inputsArr(arr,n);
findElements(arr,n);

  return 0;
}