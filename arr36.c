// 29.Write a program to find the missing number in an array of consecutive
// numbers
// Input : { 1, 2, 3, 5, 6, 7, 8 }
// Output: The missing number is 4.
#include<stdio.h>
void inputsArr(int n, int arr[]){
  printf("Enter %d elements:\n",n-1);
  for(int i = 0;i < n-1;i++){
    scanf("%d",&arr[i]);
  }
}
int findMissingNum(int n,int arr[]){
  int totalSum = (n*(n+1))/2;
  int sum = 0;
  for(int i = 0;i < n-1;i++){
    sum+= arr[i];
  }
  printf("Missing Number: %d",totalSum-sum);
  return totalSum - sum;
  }
int main(){
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int arr[n];
  inputsArr(n,arr);
  findMissingNum(n,arr);

  return 0;
}