#include<stdio.h>
#include<string.h>

int main(){
 int count=0;
    char s[1001];
    scanf("%s",s);
    int len=strlen(s);
  
  for (int i = 0; i < len; i++)
  {
    if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u')
   {
      count++;
     
   }
   
  }
  printf("%d",count);
    
 
    return 0;
}