/* Qs 4- WAP to create an array and take input from the user and print the largest element and smallest element.
   INPUT - [32,89, 53, 6, 10]
   largest - 89
   smallest - 6
*/
#include <stdio.h>
void InputArray(int arr[], int size){
  printf("Enter %d elements:\n",size);
  for(int i = 0; i<size; i++){
    scanf("%d",&arr[i]);
  }
  int large = arr[0], small = arr[0];
  for(int i = 0; i < size; i++){
    if(arr[i] > large){
      large = arr[i];
    }
    if(arr[i] < small){
      small = arr[i];
    }
  }
  printf("Smallest element: %d\n",small);
  printf("Largest element: %d",large);
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