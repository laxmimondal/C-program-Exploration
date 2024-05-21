#include<stdio.h>
#include<string.h>
int main(){
    char source[]="laxmi";
    char target[45];
    strcpy(target, source);
    printf("the target string is %s",target); 
    return 0;
}
