// WAP to print 1 to n.
#include<stdio.h>
void printNum(int start, int end){
  if(start > end){
    return;
  }
  printf("%d\n",start);
  return printNum(start+1,end);
}
int main(){
int n;
printf("Enter the number: ");
scanf("%d",&n);
printNum(1,n);





  return 0;
}