//2. Create a program that determines if a user-inputted integer is even or odd.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is an even number.",a);
    }
    if(a%2!=0)
    {
        printf("%d is an odd number.",a);
    }
    return 0;
}