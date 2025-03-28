/* String Manipulation Using Dynamic Memory Write a program that:-
~  Accepts a string from the user.
~  Allocates memory dynamically using malloc() to store the string.
~  Reverses the string using a dynamically memory block.
~  Prints the reversed string and frees all memory.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *str, *reversed;
    int i, length;
    // STEP 1: Accept the string and allocate memory.
    printf("Enter a string: ");
    str = (char *)malloc(100 * sizeof(char));
    if (str == NULL)
    {
        printf("Memory allocation faild!");
        return 1;
    }
    scanf("%s", str);
    length = strlen(str);

    // STEP 2: Allocate memory for the reversed string.
    reversed = (char *)malloc((length + 1) * sizeof(char));
    if (reversed == NULL)
    {
        printf("Memory allocation faild!");
        return 1;
        free(str);
    }

    // STEP 3: Reverse the string.
    for (i = 0; i < length; i++)
    {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; // Null terminated the reversed string

    // STEP 4: Print the reversed string.
    printf("Reversed string: %s\n", reversed);

    // STEP 5: Free the allocated Memory.
    free(str);
    free(reversed);

    return 0;
}