// 28.Write a program to rotate an array by d elements?
// Input : { 1, 2, 3, 4, 5, 6, 7 }, d = 2
// Output : {6,7,1,2, 3, 4, 5 }

#include <stdio.h>
void inputsArr(int n, int arr[])
{
  printf("Enter %d Element:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void rightRotate(int arr[], int n, int d)
{
  int temp[d];
  for (int i = 0; i < d; i++)
  {
    temp[i] = arr[n - d + i];
  }
  for (int i = n - 1; i >= d; i--)
  {
    arr[i] = arr[i - d];
  }
  for (int i = 0; i < d; i++)
  {
    arr[i] = temp[i];
  }
  for(int i = 0;i < n;i++){
    printf("%d ",arr[i]);
  }

}
int main()
{

  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  int d;
  printf("Enter the Number of rotate: ");
  scanf("%d", &d);
  rightRotate(arr, n, d);

  return 0;
}