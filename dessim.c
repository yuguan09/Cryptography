#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define round 4


//begin define the RHS of output array
int def_RHS(int a,int b)
{
    int c;
    c=a/b;
    return c;
}
//end fefine the RHS of output array


int main(void)
{
    int input[2][4];
    int key[4][4]={{1,1,1,1},{0,0,0,0},{1,0,0,0},{1,1,1,0}}; //key array
    int output[round][2][4];

    int s_box[16]={7,14,15,13,9,0,1,2,3,8,3,6,12,11,5,10};


    printf("please input a char\n");
    char N=getchar();

//begin input array



    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            input[i][j]=N%2;
            N=N/2;
        }
    }
    //printf("%d,%d\n",input[1][0],input[1][2]);     //just for test
    
    
    
//end input array


//begin the first(No.0) round



    int middle=0;

    for(int k=0;k<4;k++){
        output[0][0][k]=input[1][k];
        middle=middle+(input[1][k]^key[0][k])*pow(2,3-k);
    }
    printf("%d\n",middle);

    for(int round0=0;round0<4;round0++){
        output[0][1][round0]=def_RHS(s_box[middle],pow(2,round0))%2;
        output[0][1][round0]=output[0][1][round0]^input[0][round0];
    }



    for(int z=0;z<4;z++){
        printf("%d",output[0][1][z]);
    }
    //printf("%d,%d\n",output[0][0][2],output[0][1][1]);   //just for test
    
    
    
//end the first(No.0) round


//begin the No.1~3 round



    for(int round=0;round<2;round++){
        for(int a=0;a<4;a++){
            input[1][a]=iutput[0][a];
        }
    }
    
    
    
//end the No.1~3 round
}