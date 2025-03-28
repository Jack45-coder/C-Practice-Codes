// Write a c program to take a number from user and cheack number is possitive or negative and zero print.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter The number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("%d is a possitive number", num);
    }
    else
    {
        printf("%d is a negative number", num);
    }

    return 0;
}