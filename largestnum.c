// Find the largest of three number :-
#include<stdio.h>
int main(){
// predefined numbers.
int a = 23;
int b = 45;
int c = 21;
int largest; // variable to store the largesy number.
// Determine the largest number:-
largest=a;
if (b>largest)
{
    largest=b; // Update largest number if b is greater
}
if (c>largest)
{
    c=largest; // Update largest number if c is greater8
}
// Output the largest number:-
printf("The largest number is: %d\n",largest);



    return 0;
}