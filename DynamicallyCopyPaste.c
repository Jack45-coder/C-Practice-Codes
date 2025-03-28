// Implement a program to copy one dynamically allocated array to another.

#include<stdio.h>
#include<stdlib.h>
int main(){
int *arr1, *arr2, i, n = 5;

// Dynamically allocate memory for arr1:-
arr1 = (int *)malloc(n*sizeof(int));
if(arr1 == NULL){
    printf("Memory allocation faild!");
    return 1;
}
printf("Enter 5 integers:\n");
for(i = 0;i < n;i++){
    scanf("%d",&arr1[i]);
}
// Dynamically allocate memory for arr2:-
arr2 = (int *)malloc(n*sizeof(int));
if(arr2 ==NULL){
    printf("Memory allocation faild!");
    return 1;
}
// Copy data from arr1 to arr2:-
for(i = 0;i < n;i++){
    arr2[i] = arr1[i];
}
printf("Copied array: ");
for(i = 0;i < n;i++){
    printf("%d ",arr2[i]);
}
free(arr1);
free(arr2);
    return 0;
}