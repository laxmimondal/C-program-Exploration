#include<stdio.h>
double temp(double);
int main(){
    printf("Celcius to farhen is %lf\n",temp(46.7));
    return 0;
}
double temp(double a){
    return (a*1.8)+32;
}