// Take a user input in char and a user input as int and sum both and type cast and print in float:-
#include<stdio.h>
int main(){
char a ;
int b;
printf("Enter a character:- ");
scanf("%c",&a);

printf("Enter a integer value:- ");
scanf("%d",&b); 

float sum = (float)a + b ;
printf("%2f\n",sum);
return 0;
}