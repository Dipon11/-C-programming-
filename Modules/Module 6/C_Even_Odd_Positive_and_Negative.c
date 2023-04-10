#include<stdio.h>
int main(){
 
 int a,n, even=0,odd=0,pos=0,neg=0;
 scanf("%d",&a);
 for (int i = 0; i <a; i++)

 {
    scanf("%d",&n);
    
    if(n%2==0)
    { 
        even++;
    
    }
    else if(n%2==1 ||n%2==-1)
    {
         odd++;
         
    }
    if (n>0)
    {
        pos++;
    }
    else if(n<0)
    {
        neg++;
    }
 }   
    
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);

  return 0;
 
}