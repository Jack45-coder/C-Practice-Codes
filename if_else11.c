#include<stdio.h>
int main(){
int sp=01;
int ep=20;
while(sp <= ep) {
    if (sp % 2 == 0) {
     printf("%d square = %d\n",sp,sp*sp);
    }
    sp++;
    }
    return 0;
}