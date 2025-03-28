// Write a c program  to declare two variable of type int amd swap their variable:

#include <stdio.h>
int main()
{
    int a = 2;
    int b = 3;
    // Declare and initialize two variables:
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap value without using a third variable:
    a = a + b;
    b = a - b;
    a = a - b;

    // Print swapped value:
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
