#include<stdio.h>
int main(){
char ch;
printf("Enter the character: ");
scanf("%c",&ch);
switch (ch)
{
case 'A': 
case 'a':
printf("%c is a Vowel",ch);
break;

case 'E': 
case 'e':
printf("%c is a Vowel",ch);
break;

case 'I': 
case 'i':
printf("%c is a Vowel",ch);
break;

case 'O': 
case 'o':
printf("%c is a Vowel",ch);
break;

case 'U': 
case 'u':
printf("%c is a Vowel",ch);
break;

default:
printf("%c is a consonent",ch); 
break;
}

    return 0;
}