// QUESTION[6] Write a program where you have to take three inputs as characters and print their value:
#include<stdio.h>
int main(){
char ch1;
printf("Enter a first character: ");
scanf(" %c", &ch1);

char ch2;
printf("Enter a second character: ");
scanf(" %c", &ch2);

char ch3;
printf("Enter a third character: ");
scanf(" %c", &ch3);

printf("%c character value is %d\n",ch1,ch1);
printf("%c character value is %d\n",ch2,ch2);
printf("%c character value is %d",ch3,ch3);


return 0;
}