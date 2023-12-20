//1. Write a C program to check if a given number is positive.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number for checking it is positive negative or zero: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is a positive number.",a);
    }
    if(a<0)
    {
        printf("%d is a negative number.",a);
    }
    if(a==0)
    {
        printf("%d is equal to zero.",a);
    }
    return 0;
}