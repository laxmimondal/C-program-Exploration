//call by value
#include<stdio.h>
int sum(int, int);
int main(){
    int a =5;
    int b = 4; 
    printf("the value of a+b is %d\n", sum(a,b));
    printf("the value of a and b is %d and %d ", a,b);

    return 0;
}
int sum(int a , int b){
    return a+b;
}