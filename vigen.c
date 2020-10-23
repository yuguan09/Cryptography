#include<stdio.h>
#include<cs50.h>


//char *array;


int main(void)
{

    char mat[26][26];
    char input[40];
    char output[40];
    char edcode[5][8];

//decode array begin
char shibaura[8]={'S','H','I','B','A','U','R','A'};
for(int f=0;f<4;f++)
{
        for(int g=0;g<7;g++)
        {
            edcode[f][g]=shibaura[g];
        }
}
//decode array over

//vigenere matrix begin
    for(int j=0;j<=25;j++){

        for(int k=0;k<=25;k++){

            int i=j+k;
            mat[j][k]=i+65;
            if(i>25)for(int l=0;l<i-25;l++)
            {
                mat[j][k]=l+65;
            }
        }
    }
    printf("%c\n",mat[1][25]);
//vigenere matrix over

for(int c=0;c<4;d++)
{
   for(int d=0;d<7;d++)
   {
       
   }
}


//printf("%c,%s,%c/n",mat[2][25],input[4],output[0][1]);
}





