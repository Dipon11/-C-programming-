#include<stdio.h>

int sum() // void dile error dibe as kono parameter nai
              // o input nibe ar jodi void nah dei ignore korbe 
{
     int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
     return s;

}
// int sum()
// {
//     printf("Bhai Bisshash Koro\n");
//     return 0;

// }
int main()
{
    // printf("ami kintu call kortesi \n");
    int s= sum(100);
    // printf("Dekhi ki korteso tmi \n");
    printf("%d",s);

    
    return 0;
}
// Return + No Parameter 