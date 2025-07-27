#include<stdio.h>

int main(){
    int n,x,i;
    scanf("%d",&n);
    int frearr[10000+1],max=0;


    for(i=1;i<=10001;i++){
        frearr[i]=0;
    }

    for(i=0;i<n;i++){
        scanf("%d",&x);

        if(max<x){
            max=x;
        }

        frearr[x]++;
    }

    for(i=0;i<=max;i++){
        if(frearr[i]>0){
            printf("%d : %d\n",i,frearr[i]);
        }
    }

}

