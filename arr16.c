/*WAP Qs-2:- WAP to create an array and take input from the user and print the average of the sum of
odd numbers and average of the sum even numbers.

*/
#include <stdio.h>
void inputArray(int arr[], int n)
{
  printf("Enter %d Element:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void SumOfAverage(int arr[], int n)
{
  int sum = 0;
  int sum2 = 0;
  int c1 = 0, c2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
    {
      sum = (sum + arr[i]);
      c1 = c1 + 1;
    }
    else
    {
      sum2 = (sum2 + arr[i]);
      c2 = c2 + 1;
    }
  }
  // Calculate and print average of odd numbers
  if (c1 > 0)
  {
    printf("Average of even number = %.2f\n", (float)sum/c1);
  }
  else
  {
    printf("No even numbers in the array.\n");
  }
  if (c2 > 0)
  {
    printf("Average of Odd number = %.2f",(float)sum2/c2);
  }
  else
  {
    printf("No odd numbers in the array.\n");
  }
}

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputArray(arr, n);
  SumOfAverage(arr, n);
  return 0;
}