#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int input[2][4];
    int key[2][4]={{1,1,1,1},{0,0,0,0}};
    int output[2][4];

    printf("please input a char\n");
    char N=getchar();

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            input[i][j]=N%2;
            N=N/2;
        }
    }
    printf("%d,%d\n",input[1][3],input[1][2]);

    for(int round=0;round<2;round++){
        for(int a=0;a<4;a++){
            input[1][a]=putput[0][a];
        }
    }
}