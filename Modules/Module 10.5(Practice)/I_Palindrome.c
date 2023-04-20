#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
   scanf("%s",s);
    int len = strlen(s);
    int palindrome = 1;
    int i,j;
 

 
    //jabbw //wbbaj
 for (i = 0,j=len-1; i < j; i++,j--)
 {
      if (s[i]!=s[j]) {
            palindrome=0;       
              break;
        }

       }
 if (palindrome==0)
 {
    printf("NO");
 }
 else{
    printf("YES");
 }

}
 
 
 
 

