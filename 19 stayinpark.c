#include<stdio.h>

int main(){
    int s1,s2,s3,l1,l2,l3,smax,lmin;

    scanf("%d%d%d%d%d%d",&s1,&l1,&s2,&l2,&s3,&l3);

    smax=s1;
    lmin=l1;
    if(s2>smax){
        smax=s2;
    }
    if(s3>smax){
        smax=s3;
    }

    if(l2<lmin){
        lmin=l2;
    }
    if(l3<lmin){
        lmin=l3;
    }

    if(smax>lmin){
        printf("-1\n");
    }else{
        printf("%d %d\n",smax,lmin);
    }

    return 0;
}
