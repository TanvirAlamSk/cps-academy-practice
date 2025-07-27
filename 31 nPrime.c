#include<stdio.h>
#include <stdbool.h>

int main() {
    int n,i,j,flag;
    bool isprime;
    scanf("%d",&n);

    for(i=2; n>0; i++) {
            isprime=true;
        for(j=2; j<=i/2; j++) {
            if(i%j==0) {
                isprime=false;
                break;
            }
        }

        if(isprime){
            printf("%d ",i);
            n--;
        }
    }

    return 0;
}


