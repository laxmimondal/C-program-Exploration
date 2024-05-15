#include<stdio.h>
int main()
{
    int age=24;
    switch (age)
    {
    case 24:
        printf("you are 24");
        break;
    case 25:
        printf("you are 25");
        break;
    case 26:
        printf("you are 26");
        break;
    case 27:
        printf("you are 27");
        break;
        
    default:
        printf("no case matched");
        break;
    }
    return 0;
}
