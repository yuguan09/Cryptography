#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cs50.h>

int main(void)
{
   float **array;
   int i;
   float multi[2][2]={{0,0},{0,0}};

   int n=get_int("input a range: ");

   array=(float**)malloc(sizeof(float*)*n);

   for(i=0;i<n;i++)
   {
       array[i]=(float*)malloc(sizeof(float*)*2);
   }

   for(i=0;i<n;i++)
    {
        array[i][0]=get_int("input the number: ");
        array[i][1]=1;
        printf("%f,%f\n",array[i][0],array[i][1]);
        multi[0][0]=multi[0][0]+array[i][0]*array[i][0];
        printf("%f\n",multi[0][0]);
        multi[0][1]=multi[0][1]+array[i][0];
    }

   printf("%f,%f\n",array[2][0],array[2][1]);

    multi[1][0]=multi[0][1];
    multi[1][1]=n;

    float inver[2][2];
    inver[0][0]=1/(multi[0][0]*multi[1][1]-multi[0][1]*multi[1][0])*multi[1][1];
    inver[0][1]=-1/(multi[0][0]*multi[1][1]-multi[0][1]*multi[1][0])*multi[0][1];
    inver[1][0]=-1/(multi[0][0]*multi[1][1]-multi[0][1]*multi[1][0])*multi[1][0];
    inver[1][1]=1/(multi[0][0]*multi[1][1]-multi[0][1]*multi[1][0])*multi[0][0];

    printf("%f,%f\n",multi[1][0],multi[0][0]);
    printf("%f,%f,%f,%f\n",inver[0][0],inver[0][1],inver[1][0],inver[1][1]);
    printf("%f,%f\n",array[1][1],inver[0][0]*array[2][0]+inver[0][1]*array[2][1]);

   float *y;
   y=(float*)malloc(sizeof(float*)*n);

   for(i=0;i<n;i++)
   {
       y[i]=get_int("input a number of y: ");
       //printf("y=%f\n",y[i]);
   }

   float **matrix;
   matrix=(float**)malloc(sizeof(float*)*n);

   for(i=0;i<n;i++)
   {
       matrix[i]=(float*)malloc(sizeof(float*)*2);
   }

   for(i=0;i<n;i++)
   {
       matrix[i][0]=inver[0][0]*array[i][0]+inver[0][1]*array[i][1];
       printf("%f\n",matrix[i][0]);
       matrix[i][1]=inver[1][0]*array[i][0]+inver[1][1]*array[i][1];
       printf("%f\n",matrix[i][1]);
   }

   float x[2]={0,0};

   for(i=0;i<n;i++)
   {
       x[0]=x[0]+matrix[i][0]*y[i];
       x[1]=x[1]+matrix[i][1]*y[i];
   }

   printf("x1=%f,x2=%f\n",x[0],x[1]);

   for(i=0;i<n;i++)
   {
       free(array[i]);
   }
   free(array);

   free(y);

   for(i=0;i<n;i++)
   {
       free(matrix[i]);
   }
   free(matrix);
}

