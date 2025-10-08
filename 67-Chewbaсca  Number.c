#include<stdio.h>

int main() {
    long long x;
    scanf("%lld",&x);

    int count=0,num=0;
    int arr[18],i=0;
    while(x>0) {
        if(x==9){
          arr[count++]=x%10;
        }else{
            int res=x%10;
            if(res>4){
                arr[count++]=9-res;
            }else{
                arr[count++]=res;
            }
        }
        x/=10;

    }

    while(count>0) {
        printf("%d",arr[--count]);
    }

    printf("\n");
    return 0;
}


