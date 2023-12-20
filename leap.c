//5. Implement a program to check if a year entered by the user is a leap year.
#include<stdio.h>
int main()
{
    int year,i=0;
    printf("Enter the year: ");
    scanf("%d",&year);
    if((year%4==0&&year%100==0)||(year%400))
    {
        printf("%d is a leap year.",year);
        i=1;
    }
    if(i==0)
    {
        printf("%d is not a leap year.",year);
    }
    return 0;
}