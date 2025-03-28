// 8: Write a program to take a number from user and reverse that number.
#include<stdio.h>
int main(){
int num;
int reverse = 0;
printf("Enter a number: ");
scanf("%d",&num);

while(num != 0){
reverse = reverse * 10 + num % 10;
num = num/10;
}
printf("%d",reverse);

    return 0;
}