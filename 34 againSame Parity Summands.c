#include<stdio.h>

int main(){
    int t,i,j,n,k;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&n,&k);
        if(n<k){
            printf("No\n");
        }else if(n%2==0){
            if((n-(k-1))%2==1 && n-(k-1)>0){
                printf("Yes\n");
                for(j=0;j<k-1;j++){
                    printf("1 ");
                }
                printf("%d\n",n-k+1);
            }else if((n-2*(k-1))%2==0 && n-2*(k-1)>0){
                printf("Yes\n");
                for(j=0;j<k-1;j++){
                    printf("2 ");
                }
                printf("%d\n",n-2*(k-1));
            }else{
                printf("No\n");
            }
        }else if(n%2==1){
            if((n-(k-1))%2==1 && n-(k-1)>0){
                printf("Yes\n");
                for(j=0;j<k-1;j++){
                    printf("1 ");
                }
                printf("%d\n",n-k+1);
            }else{
                printf("No\n");
            }
        }
    }
    return 0;
}
