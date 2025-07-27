#include<stdio.h>
#include<stdbool.h>

int main(){
    int x,i;
    bool prime=true;
    scanf("%d",&x);
    for(i=2;i<x/2;i++){
        if(x%i==0){
            prime=false;
            break;
        }
    }

    if(prime) printf("Prime Number");
    else printf("Not Prime Number");

    for(i=x;i;i--){
        printf("%d",i);
    }
    return 0;
}
