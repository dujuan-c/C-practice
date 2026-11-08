#include <stdio.h>
int main(){
    int n,f;
    scanf("%d",&n);
    if(n%2==1){
        f=3*n+1;
        printf("%d",f);
    }
    else{
        f=n/2;
        printf("%d",f);
    }
    return 0;
}