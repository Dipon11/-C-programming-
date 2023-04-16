#include<stdio.h>

int main(){

    int n,evn=0,odd=0;
    scanf("%d",&n);

    int arr[n];
    for (int  i = 0; i < n; i++)
    {
     scanf("%d",&arr[i]);
    
    }
    for (int  i = 0; i < n; i++)
    {
      if(arr[i]%2==0)
      {
       evn+=arr[i];
        
      }
      else if (arr[i]%2!=0)
      {
        odd=odd+arr[i];
         
      }
      
    
    }
    printf("%d ",evn);
    printf("%d",odd);
    
    return 0;
}

