#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[45];
    printf("enter your name\n");
    gets(ch1); // gets or puts can be used for multiword string because scanf only takes one word
    // printf("your name is %s",ch1);
    puts("done printing string");
    return 0;
}
