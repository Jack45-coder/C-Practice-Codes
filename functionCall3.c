// TAKE SOMETHING AND RETURN NOTHING:

#include<stdio.h>
void sum(int a, int b);
int main(){
int a,b;
printf("Enter the number: ");
scanf("%d%d",&a,&b);
sum(a,b);

  return 0;
}
//DECLARATION
void sum(int a,int b){
  int c = a+b;
  printf("ans=%d",c);
}