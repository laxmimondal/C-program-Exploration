#include<stdio.h>
#include<string.h>
int main(){
    char str1[70]="hello ";
    char str2[100]= "laxmi";
    strcat(str1,str2); //strcat is used to cancatinate to strings
    printf("str1+str2 is %s",str1);

    return 0;
}