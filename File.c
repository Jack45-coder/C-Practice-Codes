#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    FILE *FP = NULL;
    FP = fopen("E://jackeynew/student.txt","r");
    if(FP==NULL)
    {
        printf("File not created");
    }
    else
    {
        printf("Enter a character: ");
        ch=getche();
        fputc(ch,FP);
        fclose(FP);
    }
    printf("\nFile created....");
}