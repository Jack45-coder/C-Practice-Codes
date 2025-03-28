// cocept for Array 

#include <stdio.h>
int main()
{
    int arr[25], n, i;
    int sum;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
        sum = sum + arr[i];
    }
    printf("\n total is %d", sum);
    return 0;
}
