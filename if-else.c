// Write a C program to input character from the user and check whether the character is uppercase and lowercase alphbet[USING Else if]

#include<stdio.h>
int main(){
char ch;
printf("Enter a Character: ");
scanf("%c",&ch);
if (ch >= 97 && ch <= 122)
{
    printf("LOWER-CASE!");
}
else if (ch >= 65 && ch <= 90)
{
    printf("UPPER-CASE!");
}
else
{
    printf("Please enter valid inputs! ");
}
    return 0;
}