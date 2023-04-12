#include<stdio.h>

int main(){

int a,b,div;
scanf("%d",&a);
    
    b=a/10;//3
  
    a=a%10;//9

 if(a%b==0 || b%a==0)
   {
     printf("YES");
   }
   else{ 
     printf("NO");
       }
    
    return 0;
}