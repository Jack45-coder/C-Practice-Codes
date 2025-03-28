// Write a 'C' Program to whether a given integer is divisible by both 3 and 5 using if-else statement.[18 oct 2025]

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a integer:");
    scanf("%d",&num);
    if (num % 3 == 0 && num %5 == 0)
    {
        printf("%d is divisible by both 3 and 5.\n",num);
    }
    else{

        printf("%d is not divisible by both 3 and 5.\n",num);
    }

    return 0;
}
