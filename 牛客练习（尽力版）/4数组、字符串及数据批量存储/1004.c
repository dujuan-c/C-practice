#include <stdio.h>
int main()
{
    int L,M,l,r,i,sum=0;
    scanf("%d %d",&L,&M);
    int n[10000];
    for(i=0;i<=L;i++)
    {
        n[i]=1;
    }
    for(i=1;i<=M;i++)
    {
        scanf("%d %d",&l,&r);
        for(int j=l;j<=r;j++)
        {
            n[j]=0;
        }
    }
    for(i=0;i<=L;i++)
    {
        if(n[i]==1)
            sum++;
    }
    printf("%d",sum);
    return 0;
}