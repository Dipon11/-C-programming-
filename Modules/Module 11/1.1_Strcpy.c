#include<stdio.h>
#include<string.h>

int main(){

    char a[100],b[100];
    scanf("%s %s",a,b);
    
//the value of b is stored in a with this fuction
strcpy(a,b);

printf("%s",a);


}