#include<stdio.h>

int main(){

    int n,test;
    scanf("%d",&test);

   for (int i = 1; i <=test; i++)
   {
    int n;
    scanf("%d",&n);
    do
    {
       printf("%d ",n%10); 

       n=n/10;

    }
    while (n!=0);
    printf("\n");
   } 

   return 0;
}

// 121%10== 1
// 121/10==12
// 12%10=2
// 12\10=1