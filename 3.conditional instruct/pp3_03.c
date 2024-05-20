#include<stdio.h>
int main()
{
    int marks1,marks2,marks3;
    printf("Enter marks1\n");
    scanf("%d",&marks1);
    printf("Enter marks2\n");
    scanf("%d",&marks2);
    printf("Enter marks3\n");
    scanf("%d",&marks3);
    float total = (marks1 + marks2 + marks3)/3;
    if (total>=40)
    {
        if(marks1<33||marks2<33||marks3<33){
        printf("Your percentage is %f & You failed because of less marks in sub",total);
        }
        else{
            printf("Your percentage is %f & you passed",total);
        }
    }
    else{
        printf("Your percentage is %f & you failed",total);
    }


    return 0;
    }
