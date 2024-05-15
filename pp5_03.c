#include<stdio.h>
double force(double);
int main(){
    printf("the force exerted by earth is %lf",force(58));
    return 0;
}
double force(double a){
    return a*9.8;
}