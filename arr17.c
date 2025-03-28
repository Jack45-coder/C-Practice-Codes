/*Q3. Write a program to take input from the user for an array, but only
 allows elements that are 0 or 1. Any other number entered by the user
 will not be stored in the array
 INPUT- Size = 4
 1
 0
 3
 invalid
 1
 6
 invalid
 1
 OUTPUT: arr- [1,0,1,1]
*/
#include <stdio.h>
void inputArr(int arr[], int n){
  int i = 0;
  while(i < n){
    int num;
    printf("Enter element %d (0 or 1 only): ", i + 1);
    scanf("%d", &num);
    if(num == 0 || num == 1){
      arr[i] = num;
      i++;
    }
    else{
      printf("Invalid input! Please enter either 0 or 1.\n");
    }
  }
}
void printArray(int arr[], int n) {
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  inputArr(arr,n);
  printArray(arr, n);

  return 0;
}