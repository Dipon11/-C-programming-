//RECURSION
// --Is a function that call itself to execute a task

#include<stdio.h>
void fun()
{
    printf("Fun\n");
    fun();
}
int main(){

    fun();
    return 0;
}