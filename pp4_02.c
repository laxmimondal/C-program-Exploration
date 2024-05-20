// multipication table in reverse order
#include<stdio.h>
int main(){
    int n,i ;
 printf("Enter n\n");
    scanf("%d",&n);
    printf("the multiplication order of %d in reverse is\n",n);
    for(i=10; i>0; i--)
    {
      printf("%d X %d = %d\n ",n,i, n*i);
    }
    return 0;
}
