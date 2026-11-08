#include <stdio.h>
int main()
{
    int y,m,x;
    while(scanf("%d %d %d",&y,&m,&x)!=EOF)
    {
        int days=31;
        if(m==4||m==6||m==9||m==11)
            days=30;
        else if(m==2)
        {
            if((y%4==0&&y%100!=0)||(y%400==0))
                days=29;
            else
                days=28;
        }else{
            days=31;
        }
        int sum=0;
        for(int d=1;d<=days;d++)
        {
            char s[20];
            sprintf(s,"%04d-%02d-%02d",y,m,d);
            for(int i=0;s[i]!='\0';i++)
            {
                if(s[i]=='0'+x)
                    sum++;
            }
            
        }
        printf("%d\n",sum);
    }
    return 0;
}