#include<stdio.h>

int main(){
    int price,note;
    scanf("%d%d",&price,&note);

    if(price<=note && note-price <= 5){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
