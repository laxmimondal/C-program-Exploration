#include <Stdio.h>
int main()
{
    int i = 5;
    int *ptr = &i;
    printf("the value of i is %d\n", i);
    printf("the value of ptr is %u\n", ptr);
    printf("the adress of i is %u\n", &i);
    ptr++; // ptr = ptr + 1;
    printf("the value of ptr after incrementation is %u\n", ptr);
    ptr = ptr+ 2;
    printf("the value of ptr after incrementation is %u\n", ptr);
    
    return 0;
}