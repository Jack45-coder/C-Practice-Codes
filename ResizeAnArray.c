/* Resize an Array:
~ Dynamically allocates memory for an integer array using malloc().
~ Allows the user to resize the array using realloc() (increase or decrease size).
~ Prints the comtents of the resized array.
~ frees the memory.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr, size, newSize, i;
printf("Enter the initial size of array: ");
scanf("%d",&size);

ptr = (int *)malloc(size*sizeof(int));
if (ptr == NULL)
{
    printf("Memory allocation is faild!");
    return 1;
}
printf("Enter %d integers:\n",size);
for(i = 0;i < size;i++){
    scanf("%d",&ptr[i]);
}
printf("Enter the new size of array:\n");
scanf("%d",&newSize);

ptr = (int *)realloc(ptr,newSize*sizeof(int));
if(ptr == NULL){
    printf("memory allocation is faild");
    return 1;
}
if(newSize>size){
    printf("Enter %d more integers:\n",newSize-size);
    for(i = size;i < newSize;i++){
        scanf("%d",&ptr[i]);
    }
}
printf("The contents of the array are:\n");
for(i = 0;i < newSize;i++){
    printf("%d\n",ptr[i]);
}
printf("\n");
free(ptr);


    return 0;
}