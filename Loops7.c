// 9: Write a program to take two numbers from user and print the count of numbers present between them.
// Ex  input = 4 , 8 O/P = 3


#include<stdio.h>
int main(){
int num1, num2, count;
printf("Enter the first number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf("%d",&num2);

if(num1 > num2){
    count = num1 - num2 - 1;
}
else if(num1 < num2){
    count = num2 - num1 - 1;
}
else{
    count = 0;
}
printf("Digits between %d and %d = %d",num1,num2,count);
    return 0;
}