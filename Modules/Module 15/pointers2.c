#include<stdio.h>

int main(){

    double x=5.26;
    double * ptr =&x;
    double *ptr2=ptr;
    *ptr2=223.29;

    printf("x er value -%0.2lf\n",x);
    
    printf("ptr er moddhe address er value -%0.2lf\n",*ptr);
    printf("ptr er moddhe address er value -%0.2lf\n",*ptr2);

    printf("Ptr er size %d",sizeof(ptr));
    return 0;
}