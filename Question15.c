// even number taken n num from user:-

#include<stdio.h>
void main(){
int num,i;
printf("Enter a number: ");
scanf("%d",&num);
for (int i = 1; i <= num; i++)
{
    if (i % 2 == 0)
    {
        printf("%d\n",i);
    }
    
}



}