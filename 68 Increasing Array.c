#include<stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    long long count;

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i>0 && arr[i-1]>arr[i]){
            count+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }

    printf("%lld\n",count);
    return 0;
}


