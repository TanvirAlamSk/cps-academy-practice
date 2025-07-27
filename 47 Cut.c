#include<stdio.h>

int main() {
    int n,k,i;
    scanf("%d%d",&n,&k);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=n-k;i<n;i++){
        printf("%d ", arr[i]);
    }

    for(i=0;i<n-k;i++){
        printf("%d ", arr[i]);
    }


    printf("\n");

    return 0;
}
