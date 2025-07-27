#include<stdio.h>

int main() {
    int arr2d[3][4],i,j;
    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            scanf("%d",&arr2d[i][j]);
        }
    }

    int max=arr2d[0][0],min=arr2d[0][0],maxrow=0,maxcol=0,minrow=0,mincol=0;
    for(i=0; i<3; i++) {
        int sum=0;
        for(j=0; j<4; j++) {
            sum+=arr2d[i][j];
            if(arr2d[i][j]>max){
                max=arr2d[i][j];
                maxrow=i,maxcol=j;
            }
            if(arr2d[i][j]<min){
                min=arr2d[i][j];
                minrow=i,mincol=j;
            }
        }
        printf("sum if %d no Row : %d \n",i+1,sum);
    }
    printf("\n");
    for(i=0; i<4; i++) {
        int sum=0;
        for(j=0; j<3; j++) {
            sum+=arr2d[j][i];
        }
        printf("Sum of %d no Column : %d \n",i+1,sum);
    }
    printf("\n");
    printf("Maximun value %d in arr2d[%d][%d]\n",max,maxrow+1,maxcol+1);
    printf("Manimun value %d in arr2d[%d][%d]\n",min,minrow+1,mincol+1);


    return 0;
}
