#include <stdio.h>
int main()
{
    int i = 75;
    int *j = &i;
    printf("the value of i is %d\n", i);
    printf("the address of i is %u", &i);
    return 0;
}