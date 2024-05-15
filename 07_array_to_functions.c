#include<stdio.h>
void func(int *);
int main (){
int marks[3] = {1, 2, 3};
func(marks);
    return 0;
}
void func(int *ptr){
    for (int i = 0; i < 3; i++)
    {
        printf(" the value of marks [%d] is %d",i,*(ptr++));
    }
    

}