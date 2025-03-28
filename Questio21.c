// take a number from user and print 1 to n:-

#include <stdio.h>
void main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d\n",i);
    }
    
}