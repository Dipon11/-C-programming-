#include<stdio.h>

int main(){
int n,k=1;
scanf("%d",&n);
for (int i = 1; i <=n; i++)// koi bar kaj tah korbe
{
    for (int j = 1; j <= k; j++)
    {
        printf("*");
                               //kaj
    }
   printf("\n");
    k++;
}

    return 0;
}
// *
// **
// ***
// ****