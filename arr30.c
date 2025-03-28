// WAP to take input in array and remove all duplicates numbers?
// input - [ 3,2,3,7,2,9,3,1,2,7 ]
// output - [ 3,2,7,9,1 ]

#include <stdio.h>
void inputsArr(int n, int arr[])
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}

int main()
{
  int n;
  int nTemp = n;
  int n2temp = n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  int count = 0;
  int i = 0;
  for (; i < n; i++)
  {
    int count = 0;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if(count == 0){
    printf("%d ", arr[i]);
    }
  }

  return 0;
}