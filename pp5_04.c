//fibonacci series
#include<stdio.h>
int fib(int);
int main(){
    int n = 8;
    printf("the  element %d of fibonacci series is %d",n,fib(n));
    return 0;
}
int fib(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}