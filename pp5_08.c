#include<stdio.h>
void star(int);
int main(){
    star(4);
     return 0;
}
void star(int n){
    for (int i = 0; i < 0; i++)
    {
        //print 2i+1 stars
        for (int j = 0; j < (2*i+1); j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}