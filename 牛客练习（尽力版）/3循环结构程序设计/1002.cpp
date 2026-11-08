#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int x=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%4d",x);
                x+=1;
            }
            printf("\n");
        }
    }
    return 0;
}