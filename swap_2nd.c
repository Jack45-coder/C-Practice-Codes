// write a c program to swap to integers using third variable:

#include <stdio.h>
int main()
{
    int a = 4;
    int b = 5;
    int c;

    // Declare and initialize two variables:
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap value with using a third variable:
    c = a;
    a = b;
    b = c;
    
    // Print swapped value:
    printf("After swapping: a = %d, b = %d\n", a, b);
}