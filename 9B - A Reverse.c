#include<stdio.h>

int main(){
    int l,r,len=0,i;
    char s[100000],ch;
    scanf("%d %d",&l,&r);
    scanf("%s",s);
    int ter=l+(r-l+1)/2;
    for(i=l-1;i<ter;i++,len++){
        ch=s[i];
        s[i]=s[r-1-len];
        s[r-1-len]=ch;
    }

    printf("%s",s);
}
