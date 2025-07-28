#include<stdio.h>
#include<string.h>

int main() {
    int h,w,i,j,count=0;
    scanf("%d%d",&h,&w);
    char arr2d[h][w],rough,arr[3][5];

    scanf("%c",&rough);
    for(i=0; i<h; i++) {
        for(j=0; j<w; j++) {
            scanf("%c",&arr2d[i][j]);
            if(arr2d[i][j]=='#') {
                count++;
            }
        }
        scanf("%c",&rough);

    }

    printf("%d",count);

    return 0;
}

