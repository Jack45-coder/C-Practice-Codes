// Write a program to check wether a given number is even or odd using the modulo operator:-

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the first number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is a even number.", num);
    }
    else
    {
        printf("%d is a odd number.", num);
    }

    return 0;
}