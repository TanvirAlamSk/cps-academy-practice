/*
    *
   * *
  * * *
 * * * *
* * * * *
*/


#include<stdio.h>

/*
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=n-i-1){
                printf("* ");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/


// Second way

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
