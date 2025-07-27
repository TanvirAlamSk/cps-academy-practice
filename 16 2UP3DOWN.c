#include<stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);

    if(y-x>2 || x-y>3){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}
