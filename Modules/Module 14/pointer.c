#include<stdio.h>

int main(){

    int x=100;
    // printf("%p\n",&x);
    int *p=&x;
    printf("%p\n",p);

    //de-reference 
    printf("%d\n",*p);

    *p=500;
    printf("%d",x);
    return 0;
}