#include<stdio.h>
int main(){
int sp = 5; //Starting point
int ep = 1; //Ending point
int multi=1;
while(sp>=ep){
    multi=multi*sp;
    sp=sp-1;

}
printf(" Factorial is %d",multi);
    return 0;
}