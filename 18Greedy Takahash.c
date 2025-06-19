#include<stdio.h>

int main(){
    long long int a,b,k;
    scanf("%lld%lld%lld",&a,&b,&k);

    if (k>a){
        k-=a;
        a=0;
    }else{
        a-=k;
        k=0;
    }
    if(k>b){
        b=0;
    }else{
        b-=k;
    }

    printf("%lld %lld",a,b);
    return 0;
}
