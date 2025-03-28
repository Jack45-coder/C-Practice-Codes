// Write a c program multi of two number:-

// TAKE NOTHING AND RETURN SOMETHING:-
#include<stdio.h>
// DECLARE
int multi();


int main(){

int ans = multi(); //CALL
printf("ans = %d\n",ans);
  return 0;
}
// DEFINED

int multi(){
int a = 3, b = 19;
int c = a*b;

return c;
}