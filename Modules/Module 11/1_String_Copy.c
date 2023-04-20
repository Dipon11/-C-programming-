#include<stdio.h>
#include<string.h>

int main(){

    char a[100],b[100];
    scanf("%s %s",a,b);
    //printf("%s %s",a,b);

strcpy(a,b);//the value of b is stored in a with this fuction
printf("%s",a);



//Logical representation of [STRCPY]


int len=strlen(b);
for (int i = 0; i <=len; i++)
{
    a[i]=b[i];
}   
printf("%s",a);
    return 0;
}
