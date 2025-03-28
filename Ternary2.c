// Write a C program to find the minimum of two integers using a ternary operator:

#include<stdio.h>
int main(){
int a;
printf("Enter the inputs in a: ");
scanf("%d",&a);
int b;
printf("Enter the inputs in b: ");
scanf("%d",&b);

// (a < b) ? printf("A is minimum",a) : printf("B is minimum",b);
int c = 0;
int sum = 0;
for(int i = a; i < b; i++){
    c++;
    sum+=i;
}
printf("%d\n",c);
printf("Average = %d",sum/c);


    return 0;
}