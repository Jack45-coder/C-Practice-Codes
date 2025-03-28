
#include<stdio.h>
int main(){
int arr1[5],arr2[5],merged[10];
printf("Enter 5 inputs for arr1:\n");
for(int i = 0;i < 5;i++){
  scanf("%d",&arr1[i]);
}
printf("Enter 5 inputs for arr2:\n");
for(int i = 0;i < 5;i++){
  scanf("%d",&arr2[i]);
}
for(int i = 0;i < 5;i++){
   merged[i] = arr1[i];
   merged[i+5] = arr2[i];
}
printf("Merged Array: ");
for(int i = 0;i<10;i++){
  printf("%d ",merged[i]);
}
  return 0;
}