#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    bool perfectSquare=false;

    for(int i=1;i*i<=n;i++){
        if(i*i==n){
            perfectSquare=true;
        }
    }
    if(perfectSquare){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
