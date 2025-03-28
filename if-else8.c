// Write a 'C' Program to check whether a number is divisible by  5 and 11 or not .[18oct2024]

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if( num % 5 == 0 && num % 11 == 0){
    printf("%d is divisible by both 5 and 11.\n", num);

   }
   else{
    printf("%d is not divisible by 5 and 11.\n", num);
   }


    return 0;
}