//3. Develop a C program to check if a character is a vowel or a consonant.
#include<stdio.h>
int main()
{
    char a;
    int i=0;
    printf("Enter the alphabet: ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("%c is an vowel. ",a);
        i=1;
    }
    if(i==0)
    {
        printf("%c is a consonant. ",a);
    }
    return 0;
}