/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/
/*
#include<stdio.h>
int main(){
  int nums[] = {2, 7, 11, 15};
  int target = 17;
  for(int i = 0;i < 4;i++){
  for(int j = i+j;j < 4;j++){
  if(nums[i] + nums[j] == target){
  printf( "Output %d %d\n", i,j);
   }
  }
}
printf("target %d",target);
  return 0;
}
*/
/*
#include<stdio.h>
int main(){
int nums[] = {3, 5, 6, 2, 8, 9};
int target = 18;
printf("target %d",target);
for(int i = 0;i < 6;i++){
  for(int j = i+1;j < 6;j++){
    for(int k = j+1;k < 6;k++){
      if(nums[i] + nums[j] +  nums[k] == target){
        printf("Output = %d %d %d\n",i,j,k);
      }
    }
  }
}
  return 0;
}
*/
#include <stdio.h>
#include<stdlib.h>
int main(){
 int num,i,sum = 0;
 int *arr;
 printf("Enter the limit of elements: ");
 scanf("%d",&num);

 arr = (int *)malloc(num*sizeof(int));
     if(arr == NULL){
     printf("Memory allocation faild!");
     }
 printf("You entered %d integer\n",num);
 for(i = 0;i<num;i++){
     scanf("%d\n",&arr[i]);
   //  sum = sum+arr[i];
 }
 for(i = 0;i <= arr[i];i++){
     printf("%d ",arr[i]);
 }

    free(arr);
    return 0;
}