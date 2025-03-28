// Write a program from user inputs n(size) use dynamic list, and sum of all list phir size ko badha kar naye number jode:

#include<stdio.h>
#include<stdlib.h>
int main(){
int n, *arr, newSize;
printf("Enter list of size: ");
scanf("%d",&n);
arr = (int*)malloc(n* sizeof(int)); 
if(arr == NULL)
{
 printf("Memory allocation fail!\n");
 return 1;
}
printf("Enter the %d number of list:\n",n);
for(int i = 0; i < n; i++)
{
scanf("%d",arr[i]);
}
printf("Numbers of Lists:");
for (int i = 0; i < n; i++)
{
    printf("%d\n",arr[i]);
}
free(arr);

    return 0;
}