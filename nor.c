#include<stdio.h>
#include<math.h>
#include<cs50.h>

int main(void)
{
    float **dim;
    
    int n=get_int("dimension: ");
    int i;
    
    dim=(float**)malloc(sizeof(float*)*n);
    
    for(i=0;i<n;i++)
   {
       dim[i]=(float*)malloc(sizeof(float*)*2);
   }
   
   
   
   
   for(i=0;i<n;i++)
   {
       free(dim[i]);
   }
   free(dim);
   
   

}