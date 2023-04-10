#include<stdio.h>

int main(){

    int n,a,yea;
    scanf("%d",&a);
    for (int i = 1; i <= 12; i++)
    {
       yea=a*i;
       printf("%d * %d = %d\n",a,i,yea);
    }

    
    return 0;
}