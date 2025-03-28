// TERNERY OPERATOR:

#include<stdio.h>
int main(){
int age;
printf("Enter your age: ");
scanf("%d",&age);
(age >= 18) ? printf("You are eligible for vote!") : printf("You are not eligible for vote");

    return 0;
}