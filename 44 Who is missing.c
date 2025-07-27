
#include<stdio.h>

int main() {
    int i,n,x;
    scanf("%d",&n);

    int arr[n+1];

    for(i=1;i<=n;i++){
        arr[i]=0;
    }

    for(i=0;i<4*n-1;i++){
        scanf("%d",&x);
        arr[x]++;
    }

    for(i=1;i<=n;i++){
        if(arr[i]==3){
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}

