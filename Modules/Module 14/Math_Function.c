#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

    // double x,y;
    // scanf("%lf %lf",&x,&y);
    // int ans = ceil(x);//ceil()= returns the nearest integer 
                         //greater than the provided argument
    
    //int ans= floor(x);//returns the greatest integer that
                      //is less than or equal to its argument.
    
    //int ans=round(x);//returns the nearest integer value (rounded value) of 
                      //the given float, integer, or 
                      //double number based on the decimal part of the number               
    
    //int ans=sqrt(x);//find the square root

    //int ans=pow(x,y);//finds the power
    int z;
    scanf("%d",&z);
    int ans=abs(z);//Return a positive value 
   
    printf("%d",ans);  
    return 0;
}


