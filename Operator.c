#include<stdio.h>
int main(){
int a = 9,b,c,d;
b=a++;
c=++b;
d=--a;
a=c--;
printf("%d %d %d %d",a,b,c,d);
    return 0;
}