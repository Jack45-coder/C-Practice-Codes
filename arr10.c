#include <stdio.h>
void inputArr1(int arr1[], int size)
{
  printf("Enter 5 elements:\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr1[i]);
  }
}
void inputArr2(int arr2[], int size2)
{
  printf("Enter 4 elements:\n");
  for (int i = 0; i < size2; i++)
  {
    scanf("%d", &arr2[i]);
  }
}
void mergeArray(int arr1[], int size, int arr2[], int size2, int merged[])
{
  int i,j;
  for ( i = 0; i < size; i++)
  {
    merged[i] = arr1[i];
  }
  for ( j = 0; j < size2; j++)
  {
    merged[i + j] = arr2[j];
  }
  printf("Merged Array: ");
  for (int k = 0; k < (size + size2); k++)
  {
    printf("%d ", merged[k]);
  }
  printf("\n");
}
int main()
{
  int size = 5;
  int arr1[size];
  inputArr1(arr1, size);

  int Size = 4;
  int arr2[Size];
  inputArr2(arr2, Size);

  int merged[size + Size];
  mergeArray(arr1, size, arr2, Size, merged);

  return 0;
}