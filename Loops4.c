// 4: Write a program to take Two numbers from the user and find an even number:
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the number First and Second:\n ");
    scanf("%d%d",&num1,&num2);

    printf("Even numbers between %d and %d are: ",num1, num2);
    for(int i = num1;i <= num2;i++){
        if(i % 2 == 0){
          printf("%d ",i);
        }
    }   

    return 0;
}