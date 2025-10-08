#include<stdio.h>
#include<string.h>

int main(){
    char st[101];

    scanf("%s",st);

    int len =strlen(st);
    int flag=0;
    for(int i=0;i<len;i++){
        if(st[i]=='H'|| st[i]=='Q'||st[i]=='9'){
            flag=1;
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
