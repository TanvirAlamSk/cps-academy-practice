#include<stdio.h>

int main(){
    int a,b,min,i,g;
    scanf("%d%d",&a,&b);
    min=b;
    if(a>b){
        min=a;
    }

    for(i=min;i>0;i--){
        if(a%i==0 && b%i==0){
            g=i;
            break;
        }
    }
    printf("%d\n",g);

    return 0;
}
