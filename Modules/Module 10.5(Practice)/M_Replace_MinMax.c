#include<stdio.h>
#include<limits.h> // for INT_MAX

int main(){

    int n,min=INT_MAX,max=0,add,add2,swap=0;
    scanf("%d",&n);
    //input in array
    int arr[n];
    
     for (int i = 0; i < n; i++)

     {
          scanf("%d",&arr[i]);
        //   printf("%d ",arr[i]);
    }
    //for minimum value in an array
    
    for (int i = 0; i < n; i++)

     {
          if (arr[i]<min)
          {
            min =arr[i];
            add=i;
          }
           
        
    }
 //printf("val:%d %d",min,add);

    //for the maximum value in an array 

    for (int i = 0; i < n; i++)

     {
          if (arr[i]>max)
          {
            max =arr[i];
            add2=i;
          }
           
        
    }
//printf("val:%d %d",max,add2);

     
//  printf("%d ",max);
// // int temp=0,ftemp=0,swap=0;
// // // Swapping the min and max


swap=arr[add];
arr[add]=arr[add2];
arr[add2]=swap;


  for (int i = 0; i < n; i++)

     {
        printf("%d ",arr[i]);
   }

      
    return 0;
 }
