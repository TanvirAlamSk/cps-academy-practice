/*

*     *
 *   *
  * *
   *
  * *
 *   *
*     *


*/
#include<stdio.h>

int main() {
    int n,i,j,k;
    scanf("%d",&n);

    for(i=0; i<n+1; i++) {
        for(j=0; j<i; j++) {
            printf(" ");
        }
        printf("*");

        for(k=0; k<(2*(n-i)-1); k++) {
            printf(" ");
        }

        if(i!=n) {
            printf("*");
        }
        printf("\n");

    }

    for(i=0; i<n; i++) {

        for(j=0; j<n-i-1; j++) {
            printf(" ");
        }
        printf("*");

        for(j=0; j<2*i+1; j++) {
            printf(" ");
        }

        printf("*");
        printf("\n");
    }

    return 0;
}

