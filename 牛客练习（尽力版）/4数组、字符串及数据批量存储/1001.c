#include <stdio.h>
int main()
{
    int T,i,j,n;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[j]);
        }
        int max=a[0],min=a[0],k;
        for(k=1;k<n;k++)
        {
            if(max<a[k])
            {    
                max=a[k];
            }
            if(min>a[k])
            {
                min=a[k];
            }
        }
        int cha=max-min,x=0,y=0;
        double sum1=0,sum2=0,p,f;
        for(;x<n;x++)
        {
            sum1+=a[x];
        }
        p=1.0/n*sum1;
        for(;y<n;y++)
        {
            sum2+=(a[y]-p)*(a[y]-p);
        }
        f=1.0/n*sum2;
        printf("%d %.3lf\n",cha,f);
    }
    return 0;
}