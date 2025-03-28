#include<stdio.h>
int main(){
int num1 =100;
int num2 = 98;
if (num1>num2)
{
    printf("Number %d is the maximum\n",num1);
    printf("Number %d is the minimym\n",num2);

}
else if (num2>num1)
{
    printf("Number %d is the minimum\n",num2);
    printf("Number %d is the maximum\n",num1);
}


    return 0;
}