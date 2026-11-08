#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        char str1[200],str2[200];
        scanf("%s %s",str1,str2);
        int len1=strlen(str1);
        int len2=strlen(str2);
        int a[200]={0};
        int b[200]={0};
        int c[200]={0};
        for(int i=0;i<len1;i++)
        {
            a[i]=str1[len1-i-1]-'0';
        }
        for(int j=0;j<len2;j++)
        {
            b[j]=str2[len2-j-1]-'0';
        }
        for(int i=0;i<len1;i++)
        {
            for(int j=0;j<len2;j++)
            {
                c[i+j]+=a[i]*b[j];
            }
        }
        int len3=len1+len2;
        for(int i=0;i<len3;i++)
        {    if(c[i]>=10)
            {
                c[i+1]+=c[i]/10;
                c[i]=c[i]%10;
            }
        }
        int start;
        for(start=len3-1;start>0&&c[start]==0;start--);
        for(int i=start;i>=0;i--)
        {
            printf("%d",c[i]);
        }
        printf("\n");
    }
    return 0;
}