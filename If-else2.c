#include<stdio.h>
int main(){
float percentage, sum;
int phy, che, bio, math, comp;
printf("Enter marks for physics: ");
scanf("%d",&phy);

printf("Enter marks for chemistry: ");
scanf( "%d",&che);

printf("Enter marks for biology: ");
scanf( "%d",&bio);

printf("Enter marks for math: ");
scanf( "%d",&math);

printf("Enter marks for computer: ");
scanf( "%d",&comp);
printf("\n");

sum = (phy + che + bio + math + comp);
percentage = (sum/5);
printf("Percentage: %.2f\n",percentage);

if (percentage >= 90 )
{
    printf("You got Grade'A'");
}
else if (percentage >= 80 )
{
    printf("You got Grade'B'");
}
else if (percentage >= 70)
{
    printf("You got Grade'C'");
}
else if (percentage >= 60)
{
    printf("You got Grade'D'");
}
else if (percentage >= 40)
{
    printf("You got Grade'E'");
}
else
{
    printf("You got Grade'F'");
}



    return 0;
}