// Create an array of 10 integers and find the largest number:
#include <stdio.h>
int main(){
int  arr[10];
int i, largenum;
printf("Enter 10 numbers:\n ");
for( i = 0; i < 10; i++){
    scanf("%d\n",&arr[i]);

}
 largenum = arr[0];
 for ( i = 1; i < 10; i++)
 {
    if (arr[i] > largenum)
    {
        largenum = arr[i];
    }
 }
 
printf("Largest number= %d",largenum);

    return 0;
}