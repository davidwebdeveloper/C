#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            printf("second\n");
        }
        else if(x==y)
        {
            printf("any\n");
        }
        else
        {
            printf("first\n");
        }
    }
    return 0;

}
