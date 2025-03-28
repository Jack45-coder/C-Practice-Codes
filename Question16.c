// odd number print to take a n from user:-

#include <stdio.h>
void main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}