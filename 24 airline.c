#include<stdio.h>

int main(){
    int t,i,x,n;
    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%d%d",&x,&n);
        int newplane=((n-(x*100))+99)/100;
        if(newplane>0){
          printf("%d\n",newplane);
        }else{
            printf("0\n");
        }

    }

    return 0;
}
