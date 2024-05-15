// sum of 10 natural numbers
#include<stdio.h>
int main(){
    int i=1;
    int sum = 0;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("the sum of natural number till 10 is %d", sum);
        return 0;
}
//using for loop
/*#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=1;i<=10;i++){
        sum+=i;
    }
    printf("the sum of natural number till 10 is %d", sum);
    return 0;
}

*/