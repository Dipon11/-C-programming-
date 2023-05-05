#include<stdio.h>

int main(){

    int x=100;
    int * ptr=&x;

    printf("X er adress- %p\n",&x);//x er adress
    
    printf("Ptr moddhe x er adress- %p\n",ptr); //ptr ae stored x er adress
    
    printf("Ptr er adress- %p\n",&ptr);//ptr er adress
    
    printf("Ptr er size- %p\n",sizeof(ptr));//ptr er size 
     
    
    //DEREFERENCE 
    
    printf("Ptr er adress er value- %d\n",*ptr);
    *ptr=200;
    printf("Ptr er adress er value- %d\n",*ptr);
  
  
  
  
  
    return 0;
}