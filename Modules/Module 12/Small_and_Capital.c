#include<stdio.h>
#include<string.h>

int main(){
  
    char s[1001];
    int small=0, big=0 ;
    scanf("%s",s);

for (int i = 0; i < strlen(s); i++)
{
    if (s[i]>='a' && s[i] <='z' )
    {  
        small++;
    }
    else if (s[i]>='A'&& s[i]<='Z')
    {
        big++;
    }
    
}
printf("%d %d",big,small);
 return 0;
}