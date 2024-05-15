#include <stdio.h>

int main()
{
    int marks[2][4]; // 2 classes with 4 students

    marks[0][0] = 78;
    marks[0][1] = 89;
    marks[0][2] = 67;
    marks[0][3] = 90;

    marks[1][0] = 79;
    marks[1][1] = 49;
    marks[1][2] = 96;
    marks[1][3] = 95;
    /*another way to write it
    int marks[2][4]={
        {78,89,67,90},{78,49,96,95}
    }*/

    for (int i = 0; i < 2; i++) // for rows
    {
        for (int j = 0; j < 4; j++) // for columns
        {
            printf(" %d", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
