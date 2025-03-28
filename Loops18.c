// Write a program using a loop to print the first N terms of the Fibonacci sequence.

#include<stdio.h>
int main(){
int n;
int first = 0, second = 1, next;
printf("Enter the number: ");
scanf("%d",&n);
for(int i = 0;i<n;i++){
printf("%d\n",first);
next = first + second;
first = second;
second = next;

}

  return 0;
}