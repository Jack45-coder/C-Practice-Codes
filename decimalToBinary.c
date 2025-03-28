// Qs- WAP to convert binary to decimal:-

#include<stdio.h>
int binToDecimal(int binNum){
  int ans = 0;
  int power = 1;
  while(binNum > 0){
     ans = ans + binNum % 10 * power;
     binNum = binNum/10;
     power = power*2;
  }
  return ans;
}
int main(){
  int a;
  printf("Enter the binary num: ");
  scanf("%d",&a);
  printf("Decimal Number is %d",binToDecimal(a));

  return 0;
}