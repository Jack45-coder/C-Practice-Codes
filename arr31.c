/*24.WAP to take input in array and print all duplicates numbers and its count?
I nput [ 3,2,3,7,2,9,3,1,2,7 ]
Output -
-3 duplicate.
Count=3.
- 2 duplicate.
Count=3.
- 7 duplicate.
*/
#include <stdio.h>
void findDuplicates(int arr[],int n){
  int visited[n];
  for(int i = 0; i < n; i++){
       if(visited[i] == 1)
        continue;

       int count = 0;
       for(int j = 0; j < n;j++){
        if(arr[i] == arr[j]){
          count++;
          visited[j] = 1;
        }
       }
       if(count > 1){
        printf("%d  %d times\n",arr[i],count);
       }
  }
}
int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  findDuplicates(arr,n);



  return 0;
}