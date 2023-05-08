#include<stdio.h>
#include <string.h>

int main(){
    
    int arr[5][3];
    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < 5; i++)  ///row 
    {
        for (int j= 0; j < 3; j++)//columb 
        {
            scanf("%d",&arr[i][j]);
                                          //TAKING INPUT FOR THE ARRAY
        }
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++)  ///row 
    {
        for (int j= 0; j < 3; j++)//columb 
        {
           printf("%d ",arr[i][j]);      // PRINING THE 2D ARRAY
        }
        printf("\n");
    }
    
    return 0;
}