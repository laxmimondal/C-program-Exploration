#include<stdio.h>
int main(){
    int marks[3]={89, 56,98}; //another way to write array
    for (int i = 0; i < 3; i++)
    {
        printf("enter the marks of student %d is  %d\n", i+1, marks[i]);
    }
    return 0;
}