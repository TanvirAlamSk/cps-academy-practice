#include<stdio.h>

int main(){
    int n,i,value;
    scanf("%d",&n);
    int arr[n+1];
    for(i=1;i<=n;i++){
        arr[i]=0;
    }

    for(i=1;i<(4*n);i++){
        scanf("%d",&value);
        arr[value]++;
    }

    for(i=1;i<=n;i++){
        if(arr[i]==3){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
