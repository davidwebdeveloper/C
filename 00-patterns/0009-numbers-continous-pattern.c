/*

Display the following pattern

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include<stdio.h>
int main()
{

    int i,j;
    int count = 0;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            count++;
            printf("%d ",count);
        }
        printf("\n");
    }
}
