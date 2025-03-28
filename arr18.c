/* Q4. Write a program to take an array and an index number from the user
   and print the index value.
   INPUT- [ 8,55,4,2,1 ]
   OUTPUT- Index value = 55
   Index no.= 1
*/
#include <stdio.h>
void inputArray(int arr[], int n)
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void findindex(int arr[], int n)
{
  int indexValue;
  printf("Enter index value: ");
  scanf("%d", &indexValue);
  for (int i = 0; i < n; i++)
  {
    if (indexValue == arr[i])
    {
      printf("%d", i);
    }
  }
}

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputArray(arr, n);
  findindex(arr, n);

  return 0;
}

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter size array: ");
// scanf("%d",&n);
// int arr[n];
// printf("Enter elements:\n");
// for(int i = 0;i< n;i++){
//     scanf("%d",&arr[i]);
//  }
//   int indexValue;
//   printf("Enter the indexValue: ");
//   scanf("%d",&indexValue);
//   for(int i = 0;i < n;i++){
//     if(indexValue ==arr[i]){
//       printf("%d",i);
//     }
//   }
//   return 0;
//  }