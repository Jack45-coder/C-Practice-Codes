#include <stdio.h>
int main()
{
  int arr[5];
  int multi = 1;
  int size = sizeof(arr)/sizeof(arr[0]);
  printf("Enter the elements:\n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    multi = multi * arr[i];
  }
  printf("Product = %d\n",multi);
  printf("Size = %d",size);

  return 0;
}