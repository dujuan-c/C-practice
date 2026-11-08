#include <stdio.h>
int isP(long long n)
{
    if(n<=1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(long long i=3;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}   
int main()
{
    long long t;
    scanf("%lld",&t);
    long long a=t/10;
    long long s=t;
    while(a>0)
    {
        s=s*10+a%10;
        a/=10;
    }
    if(isP(s))
        printf("prime\n");
    else
        printf("noprime\n");
    return 0;
}