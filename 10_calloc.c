#include <stdio.h>
#include <malloc.h>
int main()
{
    printf("enter the size of your array\n");
    int n;
    scanf("%d",&n);

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 45;
    ptr[1] = 46;
    ptr[2] = 47;
    ptr[3] = 48;
    printf("%d",ptr[2]);

    return 0;
}