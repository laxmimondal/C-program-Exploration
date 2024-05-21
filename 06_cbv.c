//call by value
#include <stdio.h>
int sum(int , int); //declaration of function 
int main()
{
    int a = 5;
    int b = 4;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The value of a+b is %d\n", sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
