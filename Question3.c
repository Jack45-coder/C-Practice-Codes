#include <stdio.h>

int main()
{
    long num1, num2;

    printf("Enter the first num: ");
    scanf("%ld", &num1);
    printf("Enter the second num: ");
    scanf("%ld", &num2);

    int multi = num1 * num2;
    printf("Multi of num1 and num2 is %d", multi);
    return 0;
}
