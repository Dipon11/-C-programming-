#include<stdio.h>
void fun(int m)
{  
    if (m == 0)
        return;
 
    int x = m % 10;
    fun(m / 10);
    printf("%d ", x);
}
int main()
{ 
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d",&m);
        fun(m);
        if (n==0)
        {
            printf("0");    
        }
      
        printf("\n");
    }
    return 0;
}
