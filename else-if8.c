// Write a C program to input marks of five sub phy,chem,bio,math,&computer calculate percentage and grade aacording to given conditions:-
// if percentage >= 90% : Grade 'A'
// if percentage >= 80% : Grade 'B'
// if percentage >= 70% : Grade 'C'
// if percentage >= 60% : Grade 'D'
// if percentage >= 40% : Grade 'E'
// if percentage <= 40% : Grade 'F'

#include<stdio.h>
int main()
{
    float physics,chemistry,biology,mathematics,computer;
    float total,percentage;
    float grade;
    char Grade;
    //input marks for five subjects
    printf("Enter marks for physics: ");
    scanf("%f",&physics);
    printf("Enter marks for chemistry: ");
    scanf("%f",&chemistry);
    printf("Enter marks for biology: ");
    scanf("%f",&biology);
    printf("Enter marks for mathematics: ");
    scanf("%f",&mathematics);
    printf("Enter marks for computer: ");
    scanf("%f",& computer);
    // Calculate total & percentage
    total=physics + chemistry + biology + mathematics + computer;
    percentage=(total/500)*100;
    //Determine grade based on percentage
    if (percentage>=90)
    {
        Grade ='A';
    }
    else if(percentage>=80)
    {
        Grade = 'B';
    }
    else if(percentage>=70)
    {
        Grade = 'C';
    }
    else if(percentage>=60)
    {
        Grade = 'D';
    }
    else if(percentage>=40)
    {
        Grade = 'E';
    }
    else{
        Grade = 'F';
    }
    //Output total,percentageand grade
    printf("Total marks: %.2f\n",total);
    printf("percentage: %.2f%%\n",percentage);
    printf("Grade : %c\n",Grade);
    return 0;
}
