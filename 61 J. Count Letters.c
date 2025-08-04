#include<stdio.h>
#include<string.h>

int main(){
    int arr[26],i;

    for(i=0;i<26;i++){
        arr[i]=0;
    }

    static char st[10000001];
    gets(st);

    for(i=0;st[i]!='\0';i++){
        int index=st[i]-'a';
        arr[index]++;
    }


    for(i=0;i<26;i++){
        if(arr[i]>0){
           printf("%c : %d\n",i+'a',arr[i]);
        }
    }

    return 0;
}
