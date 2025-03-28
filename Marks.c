// QUESTION[5] Create a program to take three subject marks as input and calculate the percentage, using float for precise division:-

#include<stdio.h>
int main(){
float maths, physics, chemistry, total;
maths = 100, physics = 100, chemistry = 100;
float FM = 300;

printf("Enter your marks for maths ");
scanf("%f", &maths);

printf("Enter your marks for physics ");
scanf("%f", &physics);

printf("Enter your marks for chemistry ");
scanf("%f", &chemistry);

total = maths + physics + chemistry;

float per = total * 100/FM;

printf("\n");

if (per >= 60)
{
    printf("You passed first division");
}

else if (per <= 60 && per >= 30)
{
    printf("You passed second division");
}

else
{
    printf("You passed third division");
}
printf("\nTotal marks: %.2f",total);
printf("\nYour percentage is %.2f%%",per);

    return 0;
}