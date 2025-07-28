#include<stdio.h>

int main() {
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int arr[m],arr2d[n][m];
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf("%d",&arr2d[i][j]);
        }
    }

    for(i=0; i<m; i++) {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++) {
        int sum=0;
        for(j=0; j<m; j++) {
            sum=sum+(arr2d[i][j]*arr[j]);
        }
        printf("%d\n",sum);
    }



    return 0;
}
