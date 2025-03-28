// Qs- WAP

#include <stdio.h>


int main()
{
  int arr[5] = {21, 23, 6, 89, 65};
  int index;
  printf("Enter the index: ");
  scanf("%d",&index);
  for(int i = 0;i < 5;i++){
    if(index == i){
      printf("%d",arr[i]);
    }


  }


  return 0;
}