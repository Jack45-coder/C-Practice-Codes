// 5: Write a program to takes two numbers from the users and find an odd numbers between them.
#include<stdio.h>
int main(){
int n1, n2;
printf("Enter the number 1: ");
scanf("%d",&n1);
printf("Enter the number 2: ");
scanf("%d",&n2);

printf("Odd numbers between %d and %d number: ",n1, n2);
for(int i = n1; i <=n2; i++){
    if(i % 2 != 0){
        printf("%d ",i);
    }

}

    return 0;
}