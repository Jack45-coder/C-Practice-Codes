//Write a c program to find the maximum of four integers Using nested if else..........

#include<stdio.h>
int main(){
int a, b, c, d, max;
printf("Enter the number of a: ");
scanf("%d",&a);

printf("Enter the number of b: ");
scanf( "%d",&b);

printf("Enter the number of c: ");
scanf( "%d",&c);

printf("Enter the number of d: ");
scanf( "%d",&d);

if(a > b){
    if(a > c){
    if(a > d)
    max = a;
    else 
    max = d;
    
} else {
    if(c > d)
    max = c;
    else
    max = d;
}
} else {
    if(b > c){
    if(b > d)
    max = b;
    else 
    max = d;
    
} else {
    if(c > d)
    max = c;
    else 
    max = d;
}
}
printf("The maximum number is: %d\n",max);
return 0;
}