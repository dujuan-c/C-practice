#include <stdio.h>
int main()
{
    int n,i,a[105];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[n-1]!=15&&a[n-1]!=0&&n==1)
    {
        printf("-1");
    }else if(a[n-1]==0) {
        printf("UP");
    }else if(a[n-1]==15){
        printf("DOWN");
    }else {
         if(a[n-1]>a[n-2]){
        printf("UP");
    }else{
        printf("DOWN");
         }
    }
    return 0;
}