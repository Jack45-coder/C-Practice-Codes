// Write a c program to check wether a triangle is valid or not[if else]
#include<stdio.h>
int main(){
int side1, side2,side3;
printf("Enter the lenght of side 1: ");
scanf("%d",&side1);

printf("Enter the lenght of side 2: ");
scanf("%d",&side2);

printf("Enter the lenght of side 3: ");
scanf("%d",&side3);

if(side1 == side2 && side2 == side3 && side1 == side3){
printf("Given triangle is aequilateral");
}
else if(side1 == side2 && side1 != side3){
printf("Given triangle is Isoceles triangle");
}
else if(side1 != side2 && side2 != side3 && side3 != side1){
    printf("Given triangle is scalene triangle");
}
else{
    printf("Please inputs valid side!");
}
    return 0;
}