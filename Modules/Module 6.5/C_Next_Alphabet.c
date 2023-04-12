#include<stdio.h>

int main(){

    char a,z;
    scanf("%c",&a);
if(a=='z')
{
    a=a-25;
    printf("%c",a);
}
//another way
// if (a>=122)
// {
//     a=a-25;
//     printf("%c",a);
// }

else{  
    a=a+1;
    printf("%c",a);
}
    return 0;
}