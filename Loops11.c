#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter the 1st number: ");
  scanf("%d",&num1);
  printf("Enter the 2nd number: ");
  scanf("%d",&num2);
  for(;num1 <= num2;num1++){
    if(num1 % 2 == 0){
      printf("%d Coading\n",num1);
    }
    else{
      printf("%d Age\n",num1);
    }
  }
  return 0;
}