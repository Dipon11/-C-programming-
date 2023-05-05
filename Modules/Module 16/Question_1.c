#include<stdio.h>

int main(){

    int n;
     scanf("%d",&n);
    
    int s=n-1,k=1;;
    
    for (int i = 1; i <=n; i++)
    {
      for (int j = 1;  j<=s; j++)
      {
       printf(" ");
      }
      for (int j = 1; j <=k; j++)
      {
        printf("%d",j);
      }
      s--;
      k=k+2;
      printf("\n");
      
    }
    s=n;
    k=n*2-1;
     
     for (int i = 1; i <=n; i++) //lines 
5
    {
      for (int j = s;  j<=n-1; j++)
      {
       printf(" ");
      }
      for (int j = 1; j <=k; j++)
      {
        printf("%d",j);
      }
      s--;
      k=k-2;
      printf("\n");
      
    }
    
    return 0;
}
 