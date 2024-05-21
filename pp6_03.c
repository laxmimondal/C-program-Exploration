#include<stdio.h>
void change(int*);
int main(){
    int i ;
    printf(" Enter the value of i \n");
    scanf("%d",&i);
    change(&i);
    printf(" the value of i after change ran is %d\n",i);

    return 0;
}
void change(int *ptr){
     *ptr = (*ptr)*10;

}
