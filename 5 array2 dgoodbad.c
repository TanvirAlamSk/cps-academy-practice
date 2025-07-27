#include<stdio.h>

int main(){
    int classes,max_roll,i,j;
    int marks[4][3];

    scanf("%d%d",&max_roll,&classes);

    for(i=0;i<classes;i++){
        for(j=0;j<max_roll;j++){
            scanf("%d",&marks[j][i]);
        }
    }

    for(i=0;i<classes;i++){
        for(j=0;j<max_roll;j++){
            printf("%d ",marks[j][i]);
        }
        printf("\n");
    }
    return 0;
}

/*
10 11 12 20
13 14 15 22
16 17 18 24
*/
