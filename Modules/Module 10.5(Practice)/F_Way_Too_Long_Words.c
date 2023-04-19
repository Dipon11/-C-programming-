#include<stdio.h>
#include<string.h>

int main(){

    int n ;
    scanf("%d",&n);
     
       char arr[101];
     int last =sizeof(arr)/sizeof(char);
 
   
    for (int i = 0; i < n; i++)
    {
        scanf("%s\n",&arr);
     

       int len=strlen(arr);
        if (len<=10)
        {
           printf("%s\n",arr);
        }
        else
        {
           printf("%c",arr[0]);
           printf("%d",len-2);
           printf("%c\n",arr[len-1]);
        }
      
    

    }
   
    return 0;
}