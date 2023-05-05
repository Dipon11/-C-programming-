#include<stdio.h>
void count_before_zero(int *arr,int n)
{    
   int count=0;

   for (int i = 0; i < n; i++)
   {
      if (arr[i]>0)
      {
        count++;
      }
      else{
        break;
      }
       printf("%d ",count);
   
   }
   
}
int main(){
    
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
     count_before_zero(arr,n);
    
    
    return 0;
}