#include<stdio.h>
#include<string.h>

int main(){

    char a[11],b[11],res[22];
    char add=0,temp=0;
    scanf("%s %s ",a,b);
   
    int len =strlen(a);
    int len2 =strlen(b);
    printf("%d %d",len,len2);
   
    int i ,j;

  for (i = 0; a[i] != '\0'; i++) {
         res[i] = a[i];
     }

    // Copy string b to result
    for (j = 0; b[j] != '\0'; j++) {
        res[i+j] = b[j];
     }
    res[i+j]='\0';
  printf("\n%s",res);
