/*Qs- 1:- WAP to create an array and take input from the user and print the product of the elements.
INPUT - [1,2,3,4,5]
O/P   - 120
*/
#include <stdio.h>
void inputArray(int arr[], int size){
 printf("Enter %d elements:\n",size);
 for(int i = 0;i<size;i++){
  scanf("%d",&arr[i]);
 }
}
int multiArray(int arr[], int size){
  int multi = 1;
  for(int i = 0;i < size; i++){
  multi = multi * arr[i];
  }
  printf("%d",multi);
  return multi;
}

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d",&n);
  int arr[n];
  inputArray(arr,n);
  multiArray(arr,n);
  return 0;
}