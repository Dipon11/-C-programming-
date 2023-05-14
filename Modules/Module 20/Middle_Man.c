#include<stdio.h>
#include<stdlib.h>
#include<math.h> // include math library to use ceil function

int main(){

    int n,temp=0;
    scanf("%d",&n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n ; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
          
        }
       
    }
    if (n%2==0) 
    {
        int temp1=n/2;
        printf("%d %d",arr[temp1-1],arr[temp1]);
    }
    else 
    {
        int temp2=floor(n/2); 
        printf("%d",arr[temp2]);
    }

    printf("\n");
    return 0;
}
// 0 1  2  3  4  5
//10 20 30 40 50 60 