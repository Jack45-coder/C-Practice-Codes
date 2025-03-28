#include<stdio.h>
int main(){
int cp,sp;
printf("Enter Cost price: ");
scanf("%d",&cp);
printf("Enter selling price: ");
scanf("%d",&sp);

int profit = sp - cp;
int loss = cp - sp;

printf("loss = %d",loss);
printf("Profit = %d",Profit);

    return 0;
}