// find SI input from user:-

#include <stdio.h>
void main()
{
    float P; // principal
    float T; // time
    float R; // Rate

    printf("Enter the principal amount: ");
    scanf("%f", &P);
    printf("Enter the interest rate per annum: ");
    scanf("%f", &R);
    printf("Enter the time in years: ");
    scanf("%f", &T);

    float SI = (P * R * T) / 100;
    printf("Simple interest is %.2f", SI);
}