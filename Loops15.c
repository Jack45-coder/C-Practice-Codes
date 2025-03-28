// Write a program to take user input and check whether the number is perfect or not
#include<stdio.h>
int main(){
int num, sum = 0;
printf("Enter the number: ");
scanf("%d",&num);

if(num <= 0){
  printf("PLZ Enter the possitive number: ");
  return 0;
}
for(int i =1;i <= num/2;i++){
  if(num % i == 0){
    sum = sum + i;
  }
}
if(sum == num){
  printf("%d number is perfect number",num);
}
else{
  printf("%d number is not perfect number",num);
}

  return 0;
}