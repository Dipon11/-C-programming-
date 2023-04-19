#include<stdio.h>
#include<string.h>

int main(){

   char a[100] ;
   //gets take input scanf =gets
//- gets(a);

// how to use fgets
//    //fgets(a,size,stdin)
//               |  
//            char+NULL

//aikhane array er
// size kom dawa jabe kintu beshi dawa jabe nah
  fgets(a,19,stdin);
   printf("%s",a);
   return 0;
}