// Write a program to print alphabets from Z to A:-

#include<stdio.h>
int main(){
char ch;
printf("Alphabets from Z to A are:\n");
for(ch = 'Z'; ch >= 'A';ch--){
    printf("%c\n",ch);
}
    return 0;
}