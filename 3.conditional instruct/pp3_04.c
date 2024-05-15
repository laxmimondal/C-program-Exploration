//leap year problem
#include<stdio.h>
int main(){
    printf("Enter the year\n");
    int year;
    scanf("%d",&year);
    //year is not divisible by 4
    if(year%4!=0){
        printf("It is a common year");

    }
    else if(year%100!=0){
        printf("It is a leap year");
    }
    else if(year%400!=0){
        printf("It is a common year");
    }
    else{
        printf("It is a leap year");
    }

    return 0;

}