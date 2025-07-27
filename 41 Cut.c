#include<stdio.h>

int main(){
    int n,i,k;
    scanf("%d%d",&n,&k);
    int cards[n];

    for(i=0;i<n;i++){
        scanf("%d",&cards[i]);
    }

    for(i=n-k;i<n;i++){
        printf("%d ",cards[i]);
    }

    for(i=0;i<n-k;i++){
        printf("%d ",cards[i]);
    }
    printf("\n");


    return 0;
}
