#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int input[8];
    int key[2][4]={{0,1,1,1},{0,0,0,0}};
    int output[2][4];

    printf("please input a char\n");
    char N=getchar();

    for(int i=0;i<8;i++){
        input[i]=N%2;
        N=N/2;
    }
    printf("%d,%d\n",input[7],input[6]);
}