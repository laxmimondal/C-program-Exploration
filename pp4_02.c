// multipication table in reverse order
#include<stdio.h>
int main(){
    int n = 10;
    for(int i=10; i>0; i--)
    {
      printf("%d X %d = %d\n ",n,i, n*i);
    }
    return 0;
}