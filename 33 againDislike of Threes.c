#include<stdio.h>
#include <stdbool.h>

int main() {
    int t,i,j,k;
    scanf("%d",&t);

    for(i=0; i<t; i++) {
        scanf("%d",&k);
        for(j=1; k>0; j++) {
            if(j%3==0 || j%10==3) {
                continue;
            }else{
                k--;
            }
        }
        printf("%d\n",--j);

    }

    return 0;
}


