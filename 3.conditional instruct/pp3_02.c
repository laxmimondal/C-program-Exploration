// marks distribution 
#include<stdio.h>
int main(){
    printf("Enter your marks in subject A\n");
    int a;
    scanf("%d",&a);
    printf("Enter your marks in subject B\n");
    int b;
    scanf("%d",&b);
    printf("Enter your marks in subject C\n");
    int c;
    scanf("%d",&c);
    float total = ((a+b+c)/3);
    if( total>=40 ){
        if(a<33 || b<33 || c<33){
        printf("Sorry you have not passed because your marks in one of the subject is less than 33");
        }
        else{
            printf("Congratulations, you have passed");
        }
    }
    else{
        printf("Sorry, you have failed because your total is less than 40%%");
    }

        return 0;

}