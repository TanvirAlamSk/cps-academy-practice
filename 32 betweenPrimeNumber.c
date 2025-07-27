#include<stdio.h>

int main() {
    int n,i,j,flag;
    scanf("%d",&n);

    if(n<=3) {
        for(j=1; j<n; j++) {
            printf("%d\n",j);
        }
        return 0;
    }

    for(int m=1; m<=3; m++) {
        printf("%d\n",m);
    }

    for(i=4; i<=n; i++) {
        flag=0;
        for(j=2; j<=i/2; j++) {
            if(i%j==0) {
                flag=1;
                break;
            }
        }
        if(flag==0) {
            printf("%d\n",i);
        }
    }

    return 0;
}



