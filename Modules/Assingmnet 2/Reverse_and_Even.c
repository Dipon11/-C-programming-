#include<stdio.h>

int main(){

    int n,evn=0,odd=0;
    scanf("%d",&n);

    int arr[n];
    for (int  i = 0; i < n; i++)
    {
     scanf("%d",&arr[i]);
    
    }
    for (int  i = n-1; i >=0; i--)
    {
    if (i%2==0)
    {
       printf("%d ",arr[i]);
    }
    
    }

    return 0;
}

