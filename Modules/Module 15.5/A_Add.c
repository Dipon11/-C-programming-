#include<stdio.h>
int fun (int x,int y)
{
    int add=x+y;
    return add;
}
int main(){

    int x,y;
    scanf("%d %d",&x,&y);
    int add= fun(x,y);
    printf("%d",add);
    return 0;
}