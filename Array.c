// write a program to find the sum of all elements of an array and also find the largest and smallest element of an array.

#include <stdio.h>
int main()
{
  int arr[5];
  int sum = 0;
  int large, small;
  int n;
  printf("Enter 5 inputs:\n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d",&arr[i]);
    sum = sum + arr[i];
  }
  printf("Sum of all 5 inputs = %d\n",sum);
  large = arr[0];
  small = arr[0];
  for(int i =0;i < 5;i++){
   if(arr[i] > large){
       large = arr[i];
   }
    if(arr[i] < small){
        small = arr[i];
      }
  }
  printf("Large = %d", large);
  printf("\n");
  printf("Small = %d", small);

}