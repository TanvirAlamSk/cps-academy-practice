#include<stdio.h>

int main(){
    int n,score,i,totalsteps=0,steps;
    scanf("%d",&n);

    for(i=1;i<=7*n;i++){
        scanf("%d",&steps);
        totalsteps+=steps;
        if(i%7==0){
            printf("%d ",totalsteps);
            totalsteps=0;
        }
    }

    return 0;
}
