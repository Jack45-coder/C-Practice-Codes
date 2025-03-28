// Write a program to find the first repeating element in an array?
// input:[3,2,4,7,2,9,5,1,2]
// output: 2 is repeated, count =3
// ------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
void inputsArr(int n, int arr[]){
  printf("Enter %d elements:\n",n);
  for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }
}

int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int arr[n];
  inputsArr(n,arr);
  int num, count = 0;
  printf("Enter the number: ");
  scanf("%d",&num);
  for(int i = 0;i < n;i++){
      if(num == arr[i]){
        count++;
      }
  }
  printf("%d is repeated in %d times ",num,count);
  return 0;
}