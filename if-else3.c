// Write a 'C' Program to check wether a given integer is possitive,negative or zero using if-else statement.[17oct2024]

#include<stdio.h>
int main()
{
    int num=0;
    printf("Enter a number");
    scanf("%d",&num);
    if(num>0){
    printf("%d - is a possitive number \n",num);
    }
    else if(num<0){
    printf("%d - is a negative number \n",num);
    }
    else{

        printf("The number is ZERO \n");
    }
    return 0;
}
