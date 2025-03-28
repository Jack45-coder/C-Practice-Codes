// Write a program to demonstrate the difference between pre-increment and post-increment:-

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a first number: ");
    scanf("%d", &a);

    int b = a++;
        a = ++a;
    printf("post = %d, pre %d", b, a);
    return 0;
}