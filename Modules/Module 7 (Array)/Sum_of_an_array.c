#include<stdio.h>

int main(){
//manualy giving input 
    // int arr[5]={20,10,10,20};
  
  
    int n;
    scanf("%d",&n);
   
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    
    }
    
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    
    return 0;
}