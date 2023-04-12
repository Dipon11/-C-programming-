#include<stdio.h>

int main(){

    int a,b,sum=0;
    scanf("%d %d ",&a,&b);

    if (a-b>=0)
    {
      sum=a-b;
      printf("%d",sum);
    }
    else if (a-b<=0)
    {
        sum=0;
        printf("%d",sum);
    }
    
    return 0;
}