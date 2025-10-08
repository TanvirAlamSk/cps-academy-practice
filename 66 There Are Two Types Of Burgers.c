#include<stdio.h>

int main() {
    int T;
    scanf("%d",&T);

    while(T--) {
        int b,p,f;
        scanf("%d%d%d",&b,&p,&f);

        int h,c,total=0;
        scanf("%d%d",&h,&c);

        b=b/2;
        if(h>=c) {
            if(b>=p) {
                if(f<b-p){
                    total+=p*h+f*c;
                }else{
                    total+=p*h+(b-p)*c;
                }
            } else {
                total=b*h;
            }
        } else {
            if(b>=f) {
                if(p<b-f) {
                    total+=f*c+p*h;
                } else {
                    total+=f*c+(b-f)*h;
                }
            } else {
                total=b*c;
            }
        }

        printf("%d\n",total);
    }
    return 0;
}
