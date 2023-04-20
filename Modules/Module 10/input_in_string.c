
#include<stdio.h>

int main(){

  char  a[6]; //char holds 1 byte int hold 4 bytes 
   scanf("%s",a);
     int size= sizeof(a)/sizeof(char);      //int sz=sizeof(a)/sizeof(char);
     printf("%d\n",size);
    printf("%s",a);
    return 0;
}