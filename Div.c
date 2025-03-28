#include<stdio.h>
int main(){
char ch = 'a';
printf("Enter a character: ");
scanf("%c",&ch);
if(ch >= 'a'  && ch <= 'z'){
while(ch <= 'a')
{
    printf("%c ",ch);
    ch++;
}
printf("\n");
} else{
    printf("Invalid input , pls input lowercase alphabet");
}

    return 0;
}