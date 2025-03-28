#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= (n - i + 1); j++)  // (n - i + 1)-----> [for opposite print]
    {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}