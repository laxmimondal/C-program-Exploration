#include <stdio.h>
void func(int *);
int main()
{
    int i = 75;

    printf("the address of i is %u", &i);
    func(&i);

    return 0;
}
void func(int *ptr)
{
    printf("the value of  adress ptr from func is %u\n", ptr);
}
