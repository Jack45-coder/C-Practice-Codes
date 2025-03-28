#include <stdio.h>
int inputsA()
{
  int a;
  printf("Enter the number: ");
  scanf("%d", &a);

  return a;
}

int inputsChar()
{
  char c;
  printf("Enter the character: ");
  scanf("%c", &c);

  return c;
}

void inputs(int *a, int *b)
{
  printf("Enter the 1st value: ");
  scanf("%d", a);

  printf("Enter the 2nd value: ");
  scanf("%d", b);
}

int main()
{
  int a, b;
  inputs(&a, &b);
  printf("Even num between %d and %d:\n", a, b);
  for (int i = a; i < b; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
    }
  }

  printf("Odd num between %d and %d:\n", a, b);
  for (int i = a; i < b; i++)
  {
    if (i % 2 != 0)
    {
      printf("%d\n", i);
    }
  }

  printf("\n");

  a = inputsA();
  int i = 1;
  while (i <= a)
  {
    printf("%d ", i);
    i++;
  }

  a = inputsA();
  int j = a;
  while (j > 0)
  {
    printf("%d ", j);
    j--;
  }

  printf("\n");

  int A;
  A = inputsA();
  int sum = 0;
  for (int i = 1; i <= A; i++)
  {
    sum += i;
  }
  printf("Sum of: %d\n", sum);

  printf("\n");

  int d;
  d = inputsA();
  int fact = 1;
  for (int i = 1; i <= d; i++)
  {
    fact = fact * i;
  }
  printf("Factorial: %d\n", fact);

  printf("\n");

  char c;
  c = inputsChar();
  for (char i = 97; i <= c; i++)
  {
    printf("%c ", i);
  }

  printf("\n");

  for (char i = c; i >= 97; i--)
  {
    printf(" %c ", i);
  }

  return 0;
}