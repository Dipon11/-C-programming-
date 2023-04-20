#include<stdio.h>
#include<string.h>
int main(){

      char a[100],b[100];
      scanf("%s %s",a,b);
      int v=strcmp(a,b);

    //  IF A>B Ouput will be == Value greater than 0 (1,2,3,etc)
    //  IF A<B Ouput will be == Value less than 0 (-1,-2,-3,etc)
    //  IF A=B Ouput will be == 0
    
      if (v>0)
      {
         printf("B is smaller ");
      }
      
      else if (v<0)
      {
         printf("A is smaller ");
      }
      else  (v==0)
      {
        printf("They are same ");
      }
 
      printf("%d",v);


    return 0;
}