// average of 3 numbers using function
#include <stdio.h>
double average(int, int, int);
int main()
{

    printf("the average of the numbers is %lf", average(1, 4, 3));

    return 0;
}
double average(int a, int b, int c)
{
    return (a + b + c) / 3.0; // 3.0 instead od 3 because integer/integer will give integer we need decimal so precision is required
}