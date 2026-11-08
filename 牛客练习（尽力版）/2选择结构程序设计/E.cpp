#include <stdio.h>
int main(){
    long long X,Y,Z;
    scanf("%lld%lld%lld",&X,&Y,&Z);
    if(Y%X==0){
        Z=X+Y;
    }else{
        Z=Y-X;
    }
    printf("%lld",Z);
    return 0;
}