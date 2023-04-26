#include<stdio.h>
#include<string.h>

int main(){

    int n,arr[1001],count=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
   
   for (int i = 0; i < n ; i++)
   {
    if (arr[i]==x)
    {
        count++;
    }
   }
   printf("%d",count);
    

    return 0;
}