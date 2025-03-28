#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number you want check Possitive, Negative or Zero: ");
    scanf("%d", &num);
    if (num > 0) // True OR false
    {
        printf("The num is possitive");
    }
    else
    {
        if (num < 0) // True OR false
        {
            printf("The num is negative");
        }
        else
        {
            printf("the num is ZERO");
        }
    }

    return 0;
}