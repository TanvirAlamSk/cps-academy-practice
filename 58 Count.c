#include<stdio.h>
#include<string.h>

int main(){
    char str[1000001];
    scanf("%s",str);

    int total=0;
    for(int i=0;i<strlen(str);i++){
        total+= str[i]-'0';
    }

    printf("%d\n",total);

    return 0;
}
