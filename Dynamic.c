#include<stdio.h>
#include<stdlib.h>
void main(){
int *ar,n,i;
printf("enter the limit:\n ");
scanf("%d",&n);
ar=(int*)(malloc(sizeof(int)*n));
printf("Enter Elements in arry: ");
for ( i = 0; i < n; i++)
{
    scanf("%d",&ar[i]);
}
for ( i = 0; i < n; i++){

    printf("\n%d",ar[1]);
}


}