// take a number from user and print n to 1;

#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Numbers from %d to 1:\n", num);
    for (int i = num; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}