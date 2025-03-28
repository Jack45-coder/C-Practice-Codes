// write a c program to check a given tringle is valid or invalid:

#include<stdio.h>
int main(){
int side1;
printf("Enter the first side: ");
scanf("%d",&side1);

int side2;
printf("Enter the second side: ");
scanf("%d",&side2);

int side3;
printf("Enter the third side: ");
scanf("%d",&side3);

if ((side1 + side2 > side3)&&(side1 + side3 > side2)&&(side2 + side3 > side1))
{
    printf("Given tringle is valid");
}
else
{
    printf("Given tringle is invalid");
}


    return 0;
}