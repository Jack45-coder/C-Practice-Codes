#include <stdio.h>
void inputs()
{
  int n1, n2, n3;
  printf("Enter the 3 number:\n");
  scanf("%d %d %d", &n1, &n2, &n3);
}

void checkNum()
{
  int n1, n2, n3;
  if (n1 > n2 && n1 > n3)
  {
    printf("1st is max %d", n1);
  }
  else if (n2 > n1 && n2 > n3)
  {
    printf("2nd is max %d", n2);
  }
  else
  {
    printf("3rd is max %d\n", n3);
  }
}

int checkNum2(int *n)
{
  if (*n > 0)
  {
    printf("Number is +ve: %d", *n);
  }
  else if (*n < 0)
  {
    printf("Number is -ve: %d", *n);
  }
  else
  {
    printf("Zero %d", *n);
  }
  return *n;
}

int checkLeapOrNot(int *year)
{
  if ((*year % 4 == 0 && *year % 100 != 0) || *year % 400 == 0)
  {
    printf("%d year is leap", *year);
  }
  else
  {
    printf("%d year is not leap", *year);
  }
  return *year;
}

int checkGrades(int *marks)
{
  if (*marks > 100)
  {
    printf("Enter the percentage Less than 101\nSORRY!");

    return 0;
  }
  if (*marks >= 60)
  {
    printf("Grade A", *marks);
  }
  else if (*marks >= 30 && *marks <= 60)
  {
    printf("Grade B", *marks);
  }
  else
    ("Grade C", *marks);
}

int checkEligibleForVote(int *age){
  if(*age >= 'a' && *age <= 'z' || *age >= 'A' && *age <= 'Z'){
    printf("Invalid inputs!");

    return 0;
  }
  if(*age >= 18){
    printf("You are eligible for vote.");
  }
  else{
    printf("You are not eligible for vote!");
  }

  return *age;
}
int main()
{
  // maximum of three numbers:-
  // inputs();
  // checkNum();

  // a number is positive, negative, or zero:-
  // int n;
  // int *ptr = &n;
  // printf("Enter the number: ");
  // scanf("%d",ptr);
  // checkNum2(ptr);

  // a year is a leap year:-
  // int year;
  // int *ptr2 = &year;
  // printf("Enter the year: ");
  // scanf("%d", ptr2);
  // checkLeapOrNot(ptr2);

  // grades based on percentage:-
  // int marks;
  // int *ptr3 = &marks;
  // printf("Enter a percentage: ");
  // scanf("%d", ptr3);
  // checkGrades(ptr3);

  // eligible to vote (age ≥ 18):-
  // int age;
  // int *ptr4 = &age;
  // printf("Enter your Age: ");
  // scanf("%d",ptr4);
  // checkEligibleForVote(ptr4);

  return 0;
}