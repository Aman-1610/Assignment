//4. Write a program to compare two numbers and print the larger one.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    if(b>a)
    {
        printf("%d is greater than %d",b,a);
    }
    if(a==b)
    {
        printf("%d is equal to %d",a,b);
    }
    return 0;
}