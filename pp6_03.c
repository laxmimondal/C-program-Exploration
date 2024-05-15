#include<stdio.h>
void change(int*);
int main(){
    int i =75;
    printf(" the value of i before change ran is %d\n",i);
    change(&i);
    printf(" the value of i after change ran is %d\n",i);

    return 0;
}
void change(int *ptr){
     *ptr = (*ptr)*10;

}