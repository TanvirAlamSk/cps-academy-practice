#include<stdio.h>

int main(){
    int n,m,i,j,x,initial=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    scanf("%d",&x);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]== x){
                initial=1;
                break;
            }
        }
    }

    if(initial==1){
        printf("will not take number");
    }else{
        printf("will take number");
    }

    return 0;
}
