#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];//variable size array cannot be initialized
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = n-1; i>= 0; i--)//reverse loop print 
    {
       printf("%d ",arr[i]);
    }


    return 0;
}