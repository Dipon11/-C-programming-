#include<stdio.h>
#include<limits.h>

int main(){

    int n,low=INT_MAX,pos=0;
    scanf("%d ",&n); 
    
     int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }

    for (int i = 0; i < n; i++)

    {
         if(arr[i]<low)
        {
            low=arr[i];
            pos=i+1;
          
        }
       
    }
    printf("%d %d",low,pos);
    
return 0; 
}
