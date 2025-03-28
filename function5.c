// [Qs - 1]Write a program to call a function to print "Hello World".
#include<stdio.h>
void PrintHello();
int main(){
int i = 1;
while(i <= 10){
 PrintHello();
 i++;
}
  return 0;
}
void PrintHello(){
  printf("Hello Word!\n");
}