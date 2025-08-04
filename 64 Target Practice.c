#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    char st[11];
    int points,left,right,top,bottom,min;

    while(t--){
        points=0;
        for(int row=0;row<10;row++){
            scanf("%s",st);
            for(int col=0;col<10;col++){
                if(st[col]=='X'){
                    left=col+1;
                    right=10-col;
                    top=row+1;
                    bottom=10-row;
                    min=left;
                    if(min>right){
                        min=right;
                    }
                    if(min>top){
                        min=top;
                    }
                    if(min>bottom){
                        min=bottom;
                    }
                    points+=min;
                }
            }
        }
        printf("%d\n",points);
    }
}
