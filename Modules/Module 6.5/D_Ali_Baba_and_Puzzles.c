#include<stdio.h>

int main(){

//input
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a+b*c==d || a+b-c==d )
    {
        printf("YES\n");

    }
    else if (a-b*c==d ||a-b+c==d)
    {
        printf("YES\n");
    }
    else if(a*b+c==d || a*b-c==d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }



    return 0;
}