// Write a 'c' program to take a number from user and print n to 1 (Reverse)[22oct2024]

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(i<=num){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
