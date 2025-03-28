// Write a program to take 10 inputs from the user and find Average.Maximum and Minimum of the numbers:

#include <stdio.h>


int getMin(int num1 , int num2){
  return num1 < num2 ? num1 : num2;
}

int getMax(int num1 , int num2){
  return num1 > num2 ? num1 : num2;
}

int main()
{
  int n;
  int sum = 0;
  int max = -2147483647, min = 2147483647;

  printf("Enter number of inputs: ");
  scanf("%d" , &n);

  printf("Enter %d numbers: ", n);

  for (int i = 0; i < n; i++)
  {
    int num;
    scanf("%d", &num);
    sum += num;

    max = getMax(max , num);
    min = getMin(min , num);
  }

  float Average = sum / (float)n;

  printf("Average = %.2f\n", Average);
  printf("Maximum = %d\n", max);
  printf("Minimum = %d\n", min);

  return 0;
}