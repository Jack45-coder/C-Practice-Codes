#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    printf("The sum of all Odd numbers up to %d is: %d\n", num, sum);

    return 0;
}