#include<stdio.h>

int main(){
  
     int n,k;
     scanf("%d %d",&n,&k);

   
   while (k>0)
  {
     for (int i = 1; i <=n; i++)
     {
        printf("%d ",i);
     }
     printf("\n");
     k--;
  } 
    
    return 0;
}