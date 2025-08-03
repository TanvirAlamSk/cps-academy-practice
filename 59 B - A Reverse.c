#include<stdio.h>

int main(){
    int l,r;
    scanf("%d%d",&l,&r);
    char st[100001];
    scanf("%s",st);


    for(;l<r;){
        char temp=st[l-1];
        st[l-1]=st[r-1];
        st[r-1]=temp;
        l++;
        r--;
    }

    printf("%s\n",st);

    return 0;
}
