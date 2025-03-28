#include <stdio.h>
int main()
{
    char a;
    printf("Enter your first character.: ");
    scanf("%c", &a);

    char b;
    printf("Enter your secound character.: ");
    scanf(" %c", &b);

    char c;
    printf("Enter your third character.: ");
    scanf(" %c", &c);

    printf(" a=%c\n b=%c\n c=%c", a, b, c);
    return 0;
}
