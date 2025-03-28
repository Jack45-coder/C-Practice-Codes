// take a number from user and find factorial of that number:-

#include <stdio.h>
int main()
{
    int num, i;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        fact = fact *= i;
    }
    printf("%d", fact);

    return 0;
}