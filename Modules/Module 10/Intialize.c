// #include<stdio.h>

// int main(){

//  char arr[6]={'R','E','E','T','I'};//does nt give the right input always
//    //better method 
//     char arr[6]="Reeti";//standard way 
//     // int size= sizeof(arr)/sizeof(char);
//     // printf("%d\n",arr);
//     // //can also use loop 
//     printf("%s",arr); 
//     return 0;
// }
#include<stdio.h>

int main(){
 //does nt give the right input always
 //diff method
//  char arr[6]={'R','E','E','T','I'}; 

//    for (int i = 0; i < 6; i++)
//    {
//      printf("%c",arr[i]); 
//    }
   
   
   //better method 
     char arr[5]="Reeti\0";//standard way 
   int size= sizeof(arr)/sizeof(char);
    // /use loop 
  //   for (int i = 0; i < 6; i++)
  //  {
  //     printf("%c",arr[i]); 
  //   }
    
    printf("%d\n",size);
     printf("%s",arr);
    
 
  
    return 0;
}