// Write a program to print the table of a number from 1 to n.

#include<stdio.h>
int main(){
int j;
printf("Enter the number: ");
scanf("%d",&j);

for(int i = 1; i <= j; i++){
  for(int sp = 1; sp <= 10; sp++){
    int table = i * sp;
    printf("%d * %d = %d\n",i,sp,table);
  }
}

  return 0;
}