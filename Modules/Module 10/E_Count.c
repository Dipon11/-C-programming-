#include<stdio.h>
#include<string.h>

int main(){
   int count=0;
    char s[1000001];
    fgets(s,1000001,stdin);

    for (int i = 0; i<strlen(s); i++)
    {
   
      count=count+(s[i] -'0');
    }
    printf("%d",count);
 
    return 0;
}