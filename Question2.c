#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first num: ");
    scanf("%d", &num1);
    printf("Enter the second num: ");
    scanf("%d", &num2);

    int diff = num1 - num2;
    printf("Difference of num1 and num2 is %d", diff);
    return 0;
}
