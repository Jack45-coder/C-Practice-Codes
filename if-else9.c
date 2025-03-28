// Write a 'C' Program to input cost price and selling price of a product and check profit or loss.[18oct2024]

#include<stdio.h>
int main(){
float cp,sp,profit,loss;
printf("Enter the cost price of the product: ");
scanf("%f",&cp);
printf("Enter the selling price of the product: ");
scanf("%f",&sp);
if (cp < sp)
{
    profit=sp-cp;
    printf("Profit = %.2f\n",profit );
}
else if (sp < cp)
{   
    loss=cp-sp;
    printf("loss = %.2f\n",loss);
}
else{
    printf("no prpfit , no loss.\n");
}



    return 0;
}