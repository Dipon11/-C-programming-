#include<stdio.h>
//Global Variable 
int x =500;
void fun(void)
{
    int s=100;

printf("%d\n",x);
    printf("Fun er adress -%p\n",&s);
}
int main(){
  
    int s=100;
    printf("Main er adress -%p\n",&s);
    fun();
    printf("Main er %d",x);
    return 0;
}