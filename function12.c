// Qs - 5: Write a program to call a function takes user input  and pass it to a function thats print it table.
#include <stdio.h>
void tableprint()
{
  int num;
  printf("Enter the numner you want table: ");
  scanf("%d", &num);
  printf("Multiplication of Table is:\n");
  for (int i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d\n", num, i, num * i);
  }
}
int main()
{

  tableprint();
  return 0;
}