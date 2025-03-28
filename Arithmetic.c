// from user moduls of two num:-

#include<stdio.h>
int main(){
int a,b;
printf("Enter a number for a: ");
scanf("%d",&a);

printf("Enter a number for b: ");
scanf("%d",&b);

int mod = a%b;
printf("%d",mod);
    return 0;
}