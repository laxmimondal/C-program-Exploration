#include <stdio.h>
int main()
{
    int i = 72;
    char j = 'l';
    printf("The address of i anf j is %u and %u\n", &i,&j); //%u os a special format specifier for pointer address
    printf("The value of i anf j is %d and %d", *(&i),*(&j));
    return 0;
}