#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int i;
    char str[20];
    printf("Enter a string: ");
    scanf("%s",str);
    i = 0;
/*   while (str[i]!='\0')
    {
     printf("%c",str[i]);
     i++;
    } 
*/
printf("%s",str);
    return 0;
}
