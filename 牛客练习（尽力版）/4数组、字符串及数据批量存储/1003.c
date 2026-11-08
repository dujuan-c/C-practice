#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int i,left=n,count=0,a[100];
    for(i=0;i<n;i++)
    {
        a[i]=1;
    }
    i=k;
    while(left>1)
    {
        if(a[i]==1)
            count++;
        if(count==m)
        {
            a[i]=0;
            left--;
            count=0;
        }
        i=(i+1)%n;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            printf("%d",i);
    }
   
    return 0;
}