#include<stdio.h>
#include<string.h>

int main(){
    char st[101];

    scanf("%s",st);

    for(int i=0;i<strlen(st)-1;i++){
        printf("%c ",st[i]);
    }
    printf("%c",st[strlen(st)-1]);
    printf("\n");

    return 0;
}
