#include<stdio.h>

int main(){
    
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int element =row*col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int count=0;
    
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
             if (arr[i][j] == 0)
             {
                count++;
             }
             
        }
        
    }
    if (element ==count)
    {
        printf("ZERO MATRIX ");
    }
    else
    {
        printf("Not a zero matrix");
    }
    printf("");
    return 0;
}