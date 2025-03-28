// write a c program to take 10 inputs from user and find sum and average min max and reverse list:
// DATE - 16-12-2024 [self practice]7

#include<stdio.h>
int main(){
int arr[10], min, max, sum = 0;
printf("Enter 10 inputs: \n");

for (int i = 0; i < 10; i++)
{
    scanf("%d",&arr[i]);
    sum = sum +arr[i];
}
max = min = arr[0];
for (int i = 0; i < 10; i++)
{
    if (arr[i] > max) max = arr[i];
    if (arr[i] < min) min = arr[i];
    
}
     printf("Sum of total digits = %d\n",sum);
     printf("Average = %.2f\n",sum/10.0);
     printf("MIN = %d\nMAX = %d\n",min,max);
     printf("REVERSE LIST :\n");
for (int i = 9; i >= 0; i--)
{
    printf("%d\n",arr[i]);
}

    return 0;
}