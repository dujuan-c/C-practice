#include <stdio.h>
int main()
{
    int n,x,sum=0;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>0;j/=10)
        {
            int t=j%10;
            if(t==x)
            {
                sum++;
            }
        }
    }
    printf("%d",sum);
    return 0;
}