/*eligible to drive using else-if
you can have any number of else-if*/
#include<stdio.h>
int main()
{
    printf("Enter your age\n");
    int a;
    scanf("%d",&a);
    if(a>=18)
    {
        printf("you are eligible to drive");
    }
     else if(a>15){
        printf("not eligible, we can find a toy car for you");
    }
    else{
        printf("you are a kid");
    }
        
    
    return 0;
}