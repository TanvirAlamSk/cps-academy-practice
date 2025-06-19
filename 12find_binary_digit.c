#include<stdio.h>

int main() {
    int num,d1,d2,d3,d4;
    scanf("%d",&num);
    d1=(num&1);
    d2=(num>>1)&1;

    d3=(num>>2)&1;
    d4=(num>>3)&1;
    printf("D1 = %d \nD2 = %d \nD3 = %d \nD4 = %d\n",d1,d2,d3,d4,num);
    return 0;
}


