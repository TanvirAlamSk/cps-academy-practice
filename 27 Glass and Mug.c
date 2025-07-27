#include<stdio.h>

int main(){
    int k,g,m,glass=0,mug=0;

    scanf("%d%d%d",&k,&g,&m);

    for(int i=0;i<k;i++){
        if(mug==0){
            mug=m;
            printf("1 %d %d\n",glass,mug);
        }else if(glass==g){
            glass=0;
            printf("2 %d %d\n",glass,mug);
        }else if(glass==0 && mug>glass){
            glass=g;
            mug-=g;
            printf("3 %d %d\n",glass,mug);
        }else if(glass!=0 && mug>glass){
            glass=g;
            mug-=(g-glass);
            printf("4 %d %d\n",glass,mug);
        }else if(glass==0 && mug>g){
            glass=mug;
            mug=0;
            printf("5 %d %d\n",glass,mug);
        }
    }
    printf("%d %d\n",glass,mug);
    return 0;
}
