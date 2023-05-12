#include<stdio.h>
int fun(long long int n)
{
    if (n==1)
    {
       return 1;
    }
    
    long long int ans=fun(n-1);
    return n*ans;

}
int main(){

    long long int n;
    scanf("%lld",&n);
    long long int ans= fun(n);
    printf("%lld\n",ans);
    return 0;

}