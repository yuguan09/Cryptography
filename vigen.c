#include<stdio.h>

int main(void)
{
    char mat[26][26];

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
}