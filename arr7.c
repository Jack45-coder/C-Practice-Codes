// Qs- WAP to create an array and take input from the user and print the average of the elements.

#include<stdio.h>
void Inputs(int arr[], int num){
  printf("Enter the 5 Elements:\n");
  for(int i = 0; i < num; i++){
    scanf("%d",&arr[i]);
  }
}
void Average(int arr[], int num){
  int sum = 0;
  for(int i = 0; i < num; i++){
    sum = sum + arr[i];
  }
  int average = sum/num;
  printf("Averages of elements = %d",average);
}

int main(){

int n = 5;
int arr[n];
Inputs(arr,n);
Average(arr,n);



  return 0;
}