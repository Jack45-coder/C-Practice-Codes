// Write a c program to input cost price and selling price of a product and check profit and loss:

#include<stdio.h>
int main(){
int cp;
printf("Enter the cost price: ");
scanf("%d",&cp);

int sp;
printf("Enter the selling price: ");
scanf("%d",&sp);

if (sp > cp)
{
    printf("profit %d", sp-cp);
}
else
{
    printf("loss %d",cp-sp);
}

    return 0;
}