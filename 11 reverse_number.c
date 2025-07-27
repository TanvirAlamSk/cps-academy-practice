#include<stdio.h>

int main(){
    int n,rev_n=0,sum=0;
    scanf("%d",&n);
    while(n>0){
        int mod=n%10;
        n/=10;
        rev_n+=mod;
        if(n>0){
            rev_n*=10;
        }
    }
    printf("%d\n",rev_n);
}
