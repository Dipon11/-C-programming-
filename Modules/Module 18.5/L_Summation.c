#include<stdio.h>

int fun(int arr[],int n, int i)
{
    if (i==n)
        return 0;
    
    int temp = fun(arr, n, i+1);
    temp += arr[i];
    
    return temp;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int sum = fun(arr,n,0);
    printf("%d", sum);
    return 0;
}
