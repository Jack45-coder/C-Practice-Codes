// Write a c program to take an integer (representing an ASCII value) as input and print the corresponding character:-

#include<stdio.h>
int main(){
int input;
printf("Enter a input: ");
scanf("%d",&input);
printf("%c",(char)input);


    return 0;
}