#include <stdio.h>
int main()
{
    int i=0;
    while(i<=8)
    {
        if(i==5){
            break;
        }
        printf("the value of i is %d\n",i);
        i++;
    }
    printf("out of loop");

        return 0;
}