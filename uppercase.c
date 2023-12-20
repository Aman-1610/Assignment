//8. Develop a C program that checks whether a given character is an uppercase letter.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
   // ch=(int)ch;
    if(ch>='A'&&ch<='Z')
    {
        printf("%c is an uppercase latter.",ch);
    }
    if(ch>='a'&&ch<='z')
    {
        printf("%c is a lowercase latter.",ch);
    }
    return 0;
}