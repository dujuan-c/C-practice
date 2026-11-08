#include <stdio.h>
int b5(int a)
{
    int s=0;
    while(a>0)
    {
        s+=a%10;
        a/=10;
    }
    if(s%5==0)
        return 1;
    else
        return 0;
}
int main()
{
    int x,y;
    int l,r;
    scanf("%d %d",&l,&r);
    if(l<r)
    {
        x=l;
        y=r;
    }else
    {
        x=r;
        y=l;
    }
    int sum=0;
    for(int i=x;i<=y;i++)
    {
        if(b5(i)==1)
           sum++; 
    }
    printf("%d",sum);
    return 0;
}