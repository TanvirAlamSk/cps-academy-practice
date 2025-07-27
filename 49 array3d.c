#include<stdio.h>

int main() {
    int arr3d[2][3][4],i,j,k;

    for(i=0; i<2; i++) {
        for(j=0; j<3; j++) {
            for(k=0; k<4; k++) {
                scanf("%d",&arr3d[i][j][k]);
            }
        }
    }
    printf("3D Array \n");
    for(i=0; i<2; i++) {
        for(j=0; j<3; j++) {
            for(k=0; k<4; k++) {
                printf("%d ",arr3d[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}
