// write a c program to declare three variable of type float and find their average:

#include <stdio.h>
int main()
{
    float num1 = 45.60;
    float num2 = 55.75;
    float num3 = 65.49;
    float average;
    average = (num1 + num2 + num3) / 3;
    printf("Average of three number = %.2f", average);

    return 0;
}