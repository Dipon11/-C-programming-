#include<stdio.h>

int main(){

   long long  int n=0,m=0,k=0,Katry=0;
    scanf("%lld %lld %lld",&n,&m,&k);
  
  while (n>=1 && k>=1)
  {
    if(n>=1 && m>=1 && k>=1)
    {
        
        n=n-1;
        m=m-1;
        k=k-1;
        Katry++;
     
       
    }  
    else if(n>=2 && k>=1)
    {
   
        n=n-2;
        k=k-1;
        Katry++;
       
    }
    else if (n>=1 && m>=1 && k>=1)
    {
        n=n-2;
        m=m-1;
        k=k-1;
        Katry++;

    }
    else {
        
        break;
    }
   
  }
    printf("%lld",Katry);
 
    return 0;
}