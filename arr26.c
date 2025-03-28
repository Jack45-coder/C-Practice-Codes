// 12. WAP to find 2nd maximum element in array?
//     input - [3,5,1,9]
//     output- max=5

// #include <stdio.h>
// void inputsArr(int n, int arr[])
// {
//   printf("Enter %d Elements:\n", n);
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &arr[i]);
//   }
// }

// int main()
// {
// int n;
// printf("Enter the size of Array: ");
// scanf("%d",&n);
// int arr[n];
// inputsArr(n,arr);
// int max = 0;
// int IIndmax = 0;
// for(int i = 0; i < n;i++){
//   if(arr[i] > max){
//     max = arr[i];
//   }
// }


// printf("%d",max);
//   return 0;
// }


#include <stdio.h>
void inputsArr(int n, int arr[])
{
  printf("Enter %d Elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}

int main()
{
int n;
printf("Enter the size of Array: ");
scanf("%d",&n);

int arr[n];

inputsArr(n,arr);

int temp;
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    if(arr[j]>arr[j+1]){
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
  }
}
for(int i = 0; i < n; i++){
  printf("%d  ",arr[i]);
}
printf("\n");
printf("2nd Maximum: %d",arr[n-2]);
  return 0;
}