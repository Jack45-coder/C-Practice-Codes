#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *arr, limit;
  int large, small;
  int sum = 0;
  int reverse = 0;

  // Get the limit of the array
  printf("Enter the limit of array: ");
  scanf("%d", &limit);

  // Allocate memory for the array
  arr = (int *)malloc(limit * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  // Get the integers from the user
  printf("Enter %d integers: ", limit);
  for (int i = 0; i < limit; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  // Print the entered integers
  printf("Entered integers are: ");
  for (int i = 0; i < limit; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Print the sum of the integers
  printf("Sum total = %d\n", sum);

  // Reverse the sum
  while (sum != 0) {
    reverse = reverse * 10 + sum % 10;
    sum /= 10;
  }
  printf("Reversed sum total = %d\n", reverse);

  // Find the largest and smallest integers
  large = small = arr[0];
  for (int i = 1; i < limit; i++) {
    if (arr[i] > large) {
      large = arr[i];
    }
    if (arr[i] < small) {
      small = arr[i];
    }
  }

  // Print the largest and smallest integers
  printf("Large = %d\n", large);
  printf("Small = %d\n", small);

  // Free the allocated memory
  free(arr);

  return 0;
}