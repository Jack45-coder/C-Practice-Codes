// Write a program to take the alphabet from the user and print from the user input 'a'
// ex input = e;  Output = e, d, c, b, a;

#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter an character: ");
    scanf("%c", &alpha);
    if (alpha >= 'a' && alpha <= 'z')
    {
        for (char ch = alpha; ch >= 'a'; ch--)
        {
            printf("%c\n", ch);
        }
    }
    else if (alpha >= 'A' && alpha <= 'Z')
    {
        for (char ch = alpha; ch >= 'A'; ch--)
        {
            printf("%c ", ch);
        }
    }
    else
    {
        printf("Invalid input! Please enter an alphabet.");
    }

    return 0;
}