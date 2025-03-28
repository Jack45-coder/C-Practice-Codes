// TAKE SOMETHING AND RETURN SOMETHING:-

#include <stdio.h>
// DECLARE:
float sum(float a, float b);
int main()
{
  float a = 5.76;
  float b = 2.45;
  float ans = sum(a, b); // CALL
  printf("ans = %f", ans);
  return 0;
}
// DEFINED
float sum(float a, float b)
{
  float c = a + b;
  return c;
}