/*
 Q5. Write a program to take an array and take a number from the user
 and check if the given number is present in the array or not.
 INPUT- [ 8,9,5,4,0 ]
 number = 6
 OUTPUT- the given number is not present in the array
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
void findNumber(int arr[], int n){
  int number;
  printf("Enter the number: ");
  scanf("%d",&number);
  int found = 0;
  for(int i = 0;i < n;i++){
    if(arr[i] == number){
      printf("Number %d is found at index %d.\n",number , i);
      found = 1;
      break;
    }
  }
    if(!found){
      printf("Number %d is not present in the array!",number);
    }
  }
int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputArray(arr, n);
  findNumber(arr,n);

  return 0;
}