#include<stdio.h>

void fun(int *p)
{
  *p=500;
  printf("dereference korar fun ae x er value-%d\n",*p);
}

int main(){

    int x=100;
    
    printf("x er value - %p\n",&x);
    
    fun(&x);
    
    printf("Main er x er value-%d",x);
    
    return 0;
}