//6. Create a simple calculator program that adds two numbers if a condition is met.
#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    printf("Enter the Operator: ");
    scanf(" %c",&c);
    if(c=='+')
    {
        int add=a+b;
        printf("addition of %d + %d is %d.",a,b,add);
    }
    if(c!='+')
    {
        printf("Invalid operator.");
    }
    return 0;
}