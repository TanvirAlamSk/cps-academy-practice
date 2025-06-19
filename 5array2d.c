#include<stdio.h>

int main(){
    int classes,max_roll,i,j;
    int marks[4][3];
    scanf("%d%d",&classes,&max_roll);
    for(i=0;i<classes;i++){
        for(j=0;j<max_roll;j++){
            scanf("%d",&marks[i][j]);
        }
    }

    for(j=0;j<max_roll;j++){
        for(i=0;i<classes;i++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
1 3 6
2 4 5
7 9 5
8 0 6
*/


