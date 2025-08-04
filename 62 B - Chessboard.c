#include<stdio.h>

int main(){
    char st[9],ch;
    int num;
    for(int row=8;row>0;row--){
        scanf("%s",st);
        for(int col=0;col<8;col++){
            if(st[col]=='*'){
                ch='a'+col;
                num=row;
            }
        }

    }
    printf("%c%d\n",ch,num);
    return 0;
}
