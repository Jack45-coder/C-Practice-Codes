// Write a program Two allocate memory and difference of sum:-

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr1, *ptr2, n1, n2, i, sum1 = 0, sum2 = 0;
    printf("Enter the number of integers: ");
    scanf("%d", &n1);

    // Allocte memory for ptr1:-
    ptr1 = (int *)malloc(n1 * sizeof(int));
    if (ptr1 == NULL)
    {
        printf("Memory allocation faild!");
        return 1;
    }
    printf("Enter %d integers:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &ptr1[i]);
        sum1 = sum1 + ptr1[i];
    }
    printf("Sum of first allocation:%d\n",sum1);
   
    // Free the first memory :-
    free(ptr1);

   // Second memory allocation:-
    printf("Enter the number of integers for the second allocation: ");
    scanf("%d", &n2);
  
   // Allocate memory for ptr2:-
   ptr2 = (int *)malloc(n2*sizeof(int));
   if(ptr2 == NULL){
    printf("Memory allocation faild!");
    return 1;
   }
   printf("Enter %d integers:\n",n2);
   for(i = 0; i < n2; i++){
     scanf("%d", &ptr2[i]);
     sum2 = sum2 + ptr2[i];
   }
   printf("Sum of 2nd allocation:%d\n",sum2);

   // Difference between sums:-
   printf("Difference between the two sum : %d",(sum1 - sum2));

   free(ptr2);
    return 0;
}