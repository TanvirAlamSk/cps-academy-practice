#include<stdio.h>
#include<stdlib.h>

int main() {
    int n,i,j,maindia=0,subdia=0;
    scanf("%d",&n);

    int arr2d[n][n];

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d",&arr2d[i][j]);
        }
    }

    for(i=0;i<n;i++){
        maindia+=arr2d[i][i];
        subdia+=arr2d[0+i][n-1-i];
    }
    int result=abs(maindia-subdia);

    printf("%d\n",result);

    return 0;
}
