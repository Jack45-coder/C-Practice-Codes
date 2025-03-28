 // Qs 5 - WAP to find the repeating element in an array?
// #include <stdio.h>
// void InputArray(int arr[], int size, int check){
//   int c = 0;
//   printf("Enter the elements: ");
//   for(int i = 0;i < size;i++){
//     scanf("%d",&arr[i]);
//   }for(int i = 0;i< size;i++){
//     if(arr[i] == check ){
//       c++;
//     }
//   }
// }

// int main()
// {
//   int n = 5;
//   int check = 2;
//   int arr[n];
//   InputArray(arr,n,check);
//   return 0;
// }

#include <stdio.h>
int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the %d element:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int found = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        printf("Repetiative element: %d", arr[i]);
        found = 1;
        break;
      }
    }
    if (found)
    {
    break;
    }

    if (!found)
    {
      printf("No repetiarive element\n");
    }
  }

  return 0;
}