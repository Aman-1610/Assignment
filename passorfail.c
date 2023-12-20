//7. Write a program to determine if a student has passed or failed based on their exam score.
#include<stdio.h>
int main()
{
    int stu1;
    printf("enter the percentage of marks obtained by student1: ");
    scanf("%d",&stu1);

    if(stu1>30)
    {
        printf("Student 1 has been passed the exam.");
    }
    if(stu1<30)
    {
        printf("student 1 has been failed the exam.");
    }
    return 0;
}