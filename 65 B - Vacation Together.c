#include<stdio.h>

int main(){
    int n,m,streak=0,highest=streak;
    scanf("%d%d",&n,&m);
    int arr[m+1];
    arr[m]=0;
    getchar();

    for(int i=0;i<m;i++){
        arr[i]=1;
    }
    char st[m+1];
    for(int i=0;i<n;i++){
        scanf("%s",st);
        for(int j=0;j<m;j++){
            if(st[j]=='x'){
                arr[j]=0;
            }
        }
    }

    for(int i=0;i<m+1;i++){
        if(arr[i]==0){
            if(highest<streak){
                highest=streak;
            }
            streak=0;
        }else{
            streak++;
        }
    }

    printf("%d\n",highest);

    return 0;
}
