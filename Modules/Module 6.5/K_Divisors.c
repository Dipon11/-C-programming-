#include<stdio.h>

int main(){

    int div;
    scanf("%d",&div);

    for (int i = 1; i <= div; i++)
    {
        if(div%i==0)
        {
        printf("%d\n",i);
        }
    }
    
    return 0;
}