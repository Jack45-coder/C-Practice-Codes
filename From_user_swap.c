// Write a c program to take a two number  from user and swapp their value:
// Without using thierd variable:

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter the of a: ");
    scanf("%d", &a);
    printf("Enter the value of: ");
    scanf("%d", &b);

    // swap value without using third variable:
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d",a,b);

    return 0;
}