#include<stdio.h>
int main(){
float rate,time,principal,simpleInterest;
printf("Enter the principal amount = ");
scanf("%f",&principal);
printf("Enter the annual interest rate = ");
scanf("%f",&rate);
printf("Enter the time in years = ");
scanf("%f",&time);
simpleInterest=(principal*rate*time)/100;
printf("The simple Interest is: %.2f\n",simpleInterest);



    return 0;
}