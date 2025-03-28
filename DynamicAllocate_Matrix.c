// Write a program to dynamically allocate memory for 2D array

#include<stdio.h>
#include<stdlib.h>
int main(){
int **matrix,rows, cols, i, j;

printf("Enter the number the rows and colums:\n");
scanf("%d %d",&rows, &cols);

// Allocate memory for the matrix:-
matrix = (int **)malloc(rows*sizeof(int));
for(i = 0;i < rows;i++){
   matrix[i] = (int *)malloc(rows*sizeof(int));
}
printf("Enter elements matrix:\n");
for(i = 0;i < rows;i++){
    for(j = 0;j < cols;j++){
        scanf("%d",&matrix[i][j]);
    }
}
printf("matrix\n");
for(i = 0;i < rows;i++){
    for(j = 0;j < cols;j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}
// free memory:
for(i = 0;i<rows;i++){
    free(matrix[i]);
}
free(matrix);
    return 0;
}