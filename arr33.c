// 26.WAP in c to find a pair with given sum in the array?
// input =[6,8,4,-5,7,9],k=15
// output
// Value of 0 or 5 index sum is equals to 15.
// Value of 1 or 4 index sum is equals to 15.

#include <stdio.h>
void inputsArr(int arr[], int n)
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
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int arr[n];
  inputsArr(arr, n);
  int target;
  printf("Enter the target: ");
  scanf("%d", &target);
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (target == arr[i] + arr[j])
      {
        printf("%d is index: %d & %d\n",target, i, j);
      }
    }
  }

  return 0;
}