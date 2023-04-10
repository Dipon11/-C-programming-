#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a ,b,c;
scanf("%d %d %d",&a,&b,&c);


int abc= a*100 +b*10+c ;

int cab=c*100+a*10+b;

int bca =b*100+c*10+a;


int xyz;
xyz=abc+bca+cab;
printf("%d",xyz);

    return 0;
}