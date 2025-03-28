// Write a C program to enter month number between (1-12) and print number of days in month. [USE NESTED IF_ELSE]
#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number: ");
    scanf("%d", &month);
    if (month >= 1 && month <= 12)
    {
        if (month == 2)
        {
            printf("Number of Days 28 or 29\n(Depends on leap year)");
    
    }
    else
    {
        if (month == 4 && month == 6 && month == 9 && month == 11)
        {
            printf("Number of Day's 30");
        }
        else
        {
            printf("Number of Day's 31");
        }
    }
} else {
    printf("Invalid Month number!\nPLZ enter a no between (1-12)");
}

return 0;
}