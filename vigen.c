#include<stdio.h>

int main(void)
{
    char mat[26][26];
    char input[5][8];
    char output[5][8];
    char edcode[5][8];
    int variable=0;

//decode array begin
char shibaura[8]={'S','H','I','B','A','U','R','A'};
for(int f=0;f<4;f++){
        for(int g=0;g<7;g++){
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

for(int c=0;c<4;c++){
   for(int d=0;d<8;d++){
       input[c][d]=getchar();
       output[c][d]=mat[input[c][d]-65][edcode[c][d]-65];
       if(input[c][d]=='^')goto here;
        variable=c*8+d;
   }

}
here:

for(int x=0;x<4;x++){
   for(int y=0;y<8;y++){
       printf("%c",output[x][y]);
       if(x*8+y==variable)goto outside;
   }
}
outside:

printf("\n");
}





