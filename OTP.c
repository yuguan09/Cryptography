#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 8

int main(void)
{
    char input[N];
    memset(input,0,sizeof(input));
    int n=0;
    char keynumber[8]={'S','H','I','B','A','U','R','A'};

    printf("input some char\n");

    while(n<N)
    {
        input[n]=getchar();
        if(input[n]==10)break;
        n++;
    }

    //printf("%c%d%d\n",input[0],n,input[10]);  //test code

//begin the key array
    int key[8][8];
    for(int a=0;a<8;a++){
        for(int b=0;b<8;b++){
            key[a][b]=keynumber[a]%2;
            keynumber[a]=keynumber[a]/2;
        }
    }
    printf("%d\n",key[0][1]);  //test code
//end the key array

int output[8][8];
memset(output,0,sizeof(output));

printf("%d\n",output[0][3]);  //test code

//begin the output array
for(int d=0;d<n;d++){
    for(int e=0;e<8;e++){
        output[d][e]=input[d]%2;
        input[d]=input[d]/2;
    }
}
//end the output array

//begin the output array
for(int f=0;f<n;f++){
    for(int g=0;g<8;g++){
        output[f][g]=output[f][g]^key[f][g];
        printf("%d",output[f][g]);
    }
    printf("\n");
}
//end the output array

}