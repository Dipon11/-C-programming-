//RETURN +PARAMETER
#include<stdio.h>

// return_type name (Parameter)
// {
// }

int sum (int x ,int y)
{
      int sum=x+y;  
     return sum;
}
int sum (int x ,int y);

int main()
{
     int x,y;
     scanf("%d %d",&x,&y);
     printf("%d\n",sum(x,y));
     printf("%d",sum(100,20));
    return 0;
}
// int sum (int x ,int y)
// {
//       int sum=x+y;  
//      return sum;
// }