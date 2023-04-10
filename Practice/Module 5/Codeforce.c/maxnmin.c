#include<stdio.h>

int main(){
   
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   int max=a, min=a;
   //max
   //for a
    if(a>=b && a>=c)
     {
    max=a;
    }
    else  if(b>=a && b>=c)
    {
        max=b;
    }
    else 
    {
        max=c;
    }
   
   if(a<=b && a<=c){
    min=a;
    }
    else  if(b<=a && b<=c)
    {
        min=b;
    }
    else 
    {
        min=c;
    }

    printf("%d %d",min,max);
    return 0;
}