#include<stdio.h>

int main() {
    int x,y,temp;

    while(1) {
        scanf("%d%d",&x,&y);
        if(x==0 && y==0) {
            break;
        } else if(x>y) {
            temp=x;
            x=y;
            y=temp;
            printf("%d %d\n",x,y);
        } else {
            printf("%d %d\n",x,y);
        }
    }

    return 0;
}


