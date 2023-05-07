#include<stdio.h>
void print(int i)
{ 
    if (i==6)
    return;
   print(i+1);
   printf("%d\n",i);


}
int main(){
   
   print(1);
    
    return 0;
}