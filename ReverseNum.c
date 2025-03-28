// Write a c program to ake a number from user and reverse the number:-

#include<stdio.h>
int main(){
    int num;
    int reversed = 0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    while (num != 0)
    {
      reversed =  reversed*10 + num % 10;
        num = num/10;
    }
    printf("Reverse number is %d\a\t",reversed);


    return 0;
}