#include<stdio.h>
#include<string.h>

int main(){

    char a[100];
    scanf("%s",a);
    //int i=0,count=0;
int len=strlen(a);
    
    //finding length using for loop 

    // for (int i = 0; a[i]!='\0'; i++)
    // {
    //   count++;
    // }
    // printf("%d",count);
   
   
    ////finding length using while  loop 
    //  while (a[i]!='\0')
    //  {
    //      count++;
    //      i++;
    //  }
    //  printf("%d",count);


    //easier method 
   printf("%d",len);

    
    return 0;
}