#include<stdio.h>

int main(){
    int i,len=0,flag=1;
    char str[20];

    scanf("%s",str);

     while(str[len]!='\0'){
        len++;
     }

     printf("%d\n",len);

     for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            flag=0;
            break;
        }
     }

     if(flag==1){
        printf("Palemdrome");
     }else{
         printf("Not Palemdrome");
     }
}
