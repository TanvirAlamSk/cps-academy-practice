#include<stdio.h>
#include<string.h>

int main(){
    char st[1001];
    scanf("%s",st);
    int len=strlen(st),flag=1;

    for(int i=0;i<len/2;i++){
        if(st[i]!=st[len-1-i]){
            flag=0;
            break;
        }
    }

    if(flag){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}
