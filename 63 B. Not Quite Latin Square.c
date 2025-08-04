#include<stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        char st[3][4];
        int A=0,B=0,C=0,findRow=4;
        for(int row=0; row<3; row++) {
            scanf("%s",st[row]);
            if(findRow==4) {
                for(int col=0; col<3; col++) {
                    if(st[row][col]=='?') {
                        findRow=row;
                    }
                }
            }

        }
        for(int i=0; i<3; i++) {
            if(st[findRow][i]=='A') {
                A=1;
            } else if(st[findRow][i]=='B') {
                B=1;
            } else if(st[findRow][i]=='C') {
                C=1;
            }
        }

        if(A==0) {
            printf("A\n");
        } else if(B==0) {
            printf("B\n");
        } else {
            printf("C\n");
        }
    }
    return 0;
}
