#include<stdio.h>

int main() {
    int i,n,x;
    scanf("%d",&n);
    int arr[n];

    for(i=1;i<=n;i++){
        arr[i]=0;
    }

    for(i=0; i<n-1; i++) {
        scanf("%d",&x);
        arr[x]=1;
    }

    for(i=1;i<=n;i++){
        if(arr[i]==0){
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}

