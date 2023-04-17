#include<stdio.h>
#include<string.h>

int main(){

    char S[1001], T[1001];
    scanf("%s %s",S,T);
    int len=strlen(S);
    int len2=strlen(T);
    
    printf("%d %d\n",len,len2);

    printf("%s %s",S,T);

    return 0;
}