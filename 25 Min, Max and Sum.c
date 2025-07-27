#include<stdio.h>

int main() {
    int min,max,sum=0,n,x,i;
    scanf("%d",&n);

    scanf("%d",&x);
    min=x;
    max=x;
    sum+=x;
    for(i=0; i<n-1; i++) {
        scanf("%d",&x);
        if(min>x) {
            min=x;
        }
        if(x>max) {
            max=x;
        }
        sum+=x;
    }
    printf("%d %d %d\n",min,max,sum);


    return 0;
}
