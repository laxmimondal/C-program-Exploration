#include <stdio.h>



int main() {
    char st[6];
    printf("Enter the string you want to enter using C: ");
    
    for (int i = 0; i < 5; i++) {
        scanf(" %c", &st[i]);
    }
    
    st[5] = '\0';

   

    return 0;
}
