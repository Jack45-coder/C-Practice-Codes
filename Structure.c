#include <stdio.h>
#include <conio.h>
struct student
// int main()
{
    int rno;
    char name[20];
    float per;
};
struct student S1;
void main()
{
    printf("Enter Your Rollno: ");
    scanf("%d", &S1.rno);
    getchar();
    printf("Enter Your name: ");
    gets(S1.name);

    printf("Enter Your Percentage: ");
    scanf("%f", &S1.per);

    printf("%d", S1.rno);
    puts(S1.name);
    printf("%2.f", S1.per);
}
