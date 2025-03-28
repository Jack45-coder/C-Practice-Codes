#include<stdio.h>
int main(){
char alphabet;
printf("Enter a alphabet: ");
scanf("%c",&alphabet);
if ((alphabet >= 'A' && alphabet <= 'Z' ) || (alphabet >= 'a' && alphabet <= 'z')){
    
    if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U'|| alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        printf("'%c' is a Vowel.\n",alphabet);
    }
    else
    {
        printf("'%c' is a Consonant",alphabet);
    }
     
} 
else
{
   printf("'%c' is not an Alphabet ",alphabet);
}

    return 0;
} 