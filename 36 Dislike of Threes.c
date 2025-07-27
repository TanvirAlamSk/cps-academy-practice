#include<stdio.h>

int main(){
    int t,k,j;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&k);
        for(j=1;k>0;j++){
            if(j%3==0 || j%10==3){
                continue;
            }else{
                k--;
            }
        }
        printf("%d\n",--j);
    }
    return 0;
}
