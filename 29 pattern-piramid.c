/*
    *
   * *
  *   *
 *     *
* * * * *
*/


#include<stdio.h>

/*
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n+i;j++){
            if(j==n-i-1 || j==n+i-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        printf("* ");
    }
    printf("\n");
    return 0;
}
*/

// second way

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n-1; i++) {
        for(int sp=0; sp<n-i-1; sp++) {
            printf(" ");
        }
        for(int st=0; st<2*i+1; st++) {
            if(st==0 || st==2*i) {
                printf("*");
            } else {
                printf(" ");
            }

        }
        printf("\n");
    }

    for(int sp=0; sp<n; sp++) {
        printf("* ");
    }

    return 0;
}



