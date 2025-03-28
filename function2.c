// Qs - Calculate nCr binomial coefficient for n & r:-
/*
  n
  (C) = [ n!/r!(n-r)! ]
    r

*/
#include<stdio.h>
long Factorial(int num){
  int fact = 1;
  for(int i = 1;i<=num;i++){
    fact = fact * i;
  }
  return fact;
}
long nCr(int n, int r){
  int fact_n = Factorial(n);
  int fact_r = Factorial(r);
  int fact_nMr = Factorial(n-r);

  return fact_n/(fact_r*fact_nMr);
}
int main(){
int n, r;
printf("Enter n & r for find Binomial coefficient:\n");
scanf("%d %d",&n,&r);
long result =  nCr(n, r);
printf("nCr Binomial = %ld",result);


  return 0;
}