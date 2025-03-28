// Write a c program to convert a float number to an integer using type casting and print the result.

#include<stdio.h>
int main()
{
    float a;
    int b;
    printf("input");
    scanf("%f",&a);
    b = (int)a;
    printf("%d",b);
    return 0;
}
