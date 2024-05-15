// marks distribution
#include<stdio.h>
int main(){
    printf("Enter your marks\n");
    int a;
    scanf("%d",&a);
    if(90<=a && a<=100){
        printf("Your grade is A");
    }
    else if(80<=a && a<90){
        printf("Your grade is B");

    }
    else if(70<=a && a<80){
        printf("Your grade is C");

    }
    else if(60<=a && a<70){
        printf("Your grade is D");

    }
    else if(a<60){
        printf("Your grade id F");
    }
  return 0;

}
