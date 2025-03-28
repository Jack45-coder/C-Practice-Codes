// Write a program to take a two number from user and swap :
#include <stdio.h>
int main()
{
    int a, b;
    int c = 0;    
    printf("Enter the two number before swap:\n", a, b);
    scanf("%d %d", &a, &b);
/*    
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swap two number\n:%d\n %d", a, b);
*/
    c = a + b;
    a = c - a;
    b = c - b;

    printf("after swap two number : %d %d", a, b);
    return 0;
}