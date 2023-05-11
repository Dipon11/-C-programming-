#include<stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    

    for (int i = 0; i < n; i++)  ///row 
    {
        for (int j= 0; j < n; j++)//columb 
        {
            scanf("%d",&arr[i][j]);
                                          //TAKING INPUT FOR THE ARRAY
        }
        printf("\n");
    }
    
    int temp=0;
    for (int i = 0; i < n; i++)
       {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                temp+=arr[i][j];
                continue;
                
            }
          
           
        }
      } 
    int temp1=0;
  for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i+j==n-1)
            {
                temp1+=arr[i][j];
                continue;
            }
          
        }
        
    }
    int sum =abs(temp)+abs(temp1);
    printf("%d\n",sum);

    
    return 0;
}