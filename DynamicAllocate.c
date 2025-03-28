// Write a c program to allocate memory with malloc, calloc and realloc function:-
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr, n, i;
    // USING MALLOC
    printf("Enter the number of elements for malloc: ");
    scanf("%d",&n);

    ptr = (int *)malloc(n*sizeof(int)); // Allocating memory using malloc.
    if(ptr == NULL){
        printf("Memory allocation faild!");
        return 1;
    }
    printf("Enter %d integers\n",n);
    for(i = 0; i < n; i++){
       scanf("%d",&ptr[i]);
    }

    printf("You entered\n");
    for(i = 0; i < n; i++){
       printf("%d\n",ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}
