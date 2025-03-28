// take a number from user and print sum of all number:-

#include <stdio.h>
int main()
{
    int num;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
        printf("Sum of all numbers from 1 to %d is: %d\n" ,num, sum);
    
     return 0;
}
