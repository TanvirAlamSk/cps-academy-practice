#include<stdio.h>

int main(){
    int n,i,value;
    scanf("%d",&n);
    int arr[n+1];
    for(i=1;i<=n;i++){
        arr[i]=0;
    }

    for(i=1;i<n;i++){
        scanf("%d",&value);
        arr[value]=value;
    }

    for(i=1;i<=n;i++){
        if(arr[i]==0){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
