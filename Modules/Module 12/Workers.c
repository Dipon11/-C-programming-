#include<stdio.h>

int main(){
    int m1,m2,d;
    scanf("%d %d %d",&m1,&m2,&d);

   int temp=0,ftemp=0;

   temp=m1*d;
   ftemp=temp/m2;

   printf("%d",ftemp);


    
    return 0;
}