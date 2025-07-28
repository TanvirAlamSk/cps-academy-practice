#include<stdio.h>

int main() {
    int n,m,i,j,top,left,buttom,right;
    scanf("%d%d",&n,&m);
    int arr2d[n][m];

    scanf("%d%d%d%d",&top,&left,&buttom,&right);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr2d[i][j]);
        }
    }
    printf("sub matrix \n");
    for(i=top;i<=buttom;i++){
        for(j=left;j<=right;j++){
            printf("%d ",arr2d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
