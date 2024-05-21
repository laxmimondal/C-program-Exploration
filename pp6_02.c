#include <stdio.h>
void func(int);
int main()
{
    int i = 75;
    printf("the value of i is %d\n", *(&i));
    func(i);
    printf("the address of i is %u\n", &i);
    

    return 0;
}
void func(int ptr)
{
    printf("the address ptr  is %u\n", &ptr);
}
