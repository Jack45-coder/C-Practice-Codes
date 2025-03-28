/* WAP to create an array of ve inputs from the user and display the elements of array.
   Inpit - 5, elements of array = 2,4,6,8,9
   Output - [2, 4, 6, 8, 9]
*/

#include <stdio.h>
void input(int arr[],int n)
{
    printf("Enter Your Elements:\n");
    for(int i = 0;i < n;i++)
    {
      scanf("%d",&arr[i]);
    }
}

void output(int arr[], int n)
{
  printf("Your Elements\n");
  for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);

  }
}

int main(int argc, char const *argv[])
{
  printf("Enter Size of array:");
  int size;
  scanf("%d",&size);
  int arr[size];
  input(arr,size);
  output(arr,size);

  return 0;
}