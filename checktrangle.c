#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three angles for trangle :");
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && (a+ b + c == 180))
    {
        printf("The trangle is valid.\n");
    }
    else{
        printf("the trangle is not valid.\n");
    }
    return 0;
}
