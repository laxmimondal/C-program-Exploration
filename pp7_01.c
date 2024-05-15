#include<stdio.h>
int main(){
    int arr[10];
    arr[0]=7;
    arr[1]=5;
    arr[2]=8;
    int *ptr = arr;
    printf("the value of ptr is %d\n", *ptr);
    ptr = ptr+2;
    printf("the value of ptr is %d", *ptr);
    return 0;
}