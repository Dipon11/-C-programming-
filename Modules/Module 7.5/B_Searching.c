#include<stdio.h>

int main(){

    
    long long int exists=0;
    
    int n,i,found=-1;
    scanf("%d ",&n);
    
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    //  for (int i = 0; i < n; i++)
    // {
    //    printf("%d\n",arr[i]);
    // } printing the calue in an array 
      long long int x;
    scanf("%lld",&x);
   

    
    for (i = 0; i <n; i++)
    {
    if(arr[i]==x) 
    {
      found=i;
      break;
    }
    }
    if (found>=0)
  {
   printf("%d",found);
  }
 else {

  printf("-1");
 }


return 0;
    }
  

   

  

