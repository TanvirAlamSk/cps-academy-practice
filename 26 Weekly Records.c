#include<stdio.h>

int main() {
    int n,i,totalstep=0;
    scanf("%d",&n);
    int arr[7*n+1];

    for(i=1; i<=7*n; i++) {
        scanf("%d",&arr[i]);
    }
    for(i=1; i<=7*n; i++) {
        totalstep+=arr[i];
        if(i%7==0) {
            printf("%d ",totalstep);
            totalstep=0;
        }
    }
    printf("\n");
    return 0;
}
