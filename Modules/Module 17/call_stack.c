#include<stdio.h>
void world()
{
    printf("World Start\n");//3
    printf("World End\n");//4
}

void hello()
{
    printf("Hello Start\n");//2
    world();//wait
    printf("Hello End\n");//5
}


int main(){
   
   printf("Main Start\n");//PRINT ER SEQUENCE - 1
   hello();//wait
   printf("Main End\n");//6 
    return 0;
}