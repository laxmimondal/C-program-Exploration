//sum of n natural numbers
//sum(n)= 1+2+3+..(n-1)+n
#include<stdio.h>
int sum(int);
int main(){
    
    printf("the sum of first 5 natural numbers is %d",sum(5));
    
    return 0;
}
int sum( int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n;
}