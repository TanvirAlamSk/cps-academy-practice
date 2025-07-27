#include<stdio.h>

int main(){
    int n,m,i,total=0,solveInd;
    scanf("%d%d",&n,&m);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<m;i++){
        scanf("%d",&solveInd);
        total+=arr[solveInd-1];
    }

    printf("%d\n",total);
    return 0;
}
