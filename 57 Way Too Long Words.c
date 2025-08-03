#include<stdio.h>
#include<string.h>

int main(){
    char st[100];
    int n;
    scanf("%d",&n);



    for(int i=0;i<n;i++){
        scanf("%s",st);
        if(strlen(st)>10){
            printf("%c%d%c\n",st[0],strlen(st)-2,st[strlen(st)-1]);
        }else{
            printf("%s\n",st);
        }

    }
    printf("\n");

    return 0;
}
