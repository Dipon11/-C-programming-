// EXACT ROW COLUMB PRINT 
#include<stdio.h>


int main(){
    
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[5][3];
   

    for (int i = 0; i < row; i++)  ///row 
    {
        for (int j= 0; j < col; j++)//columb 
        {
            scanf("%d",&arr[i][j]);
                                          //TAKING INPUT FOR THE ARRAY
        }
        printf("\n");
    }
    // EXACT ROW PRINT

   int e;
   scanf("%d",&e);
   for (int i = 0; i < col; i++)

   {
      printf("%d ",arr[e][i]);
   }

  // EXACT COL PRINT
    
    int c;
   scanf("%d",&c);
   for (int i = 0; i < row; i++)
   {
        printf("%d\n",arr[i][c]);

   }
   
   
    
    return 0;
}