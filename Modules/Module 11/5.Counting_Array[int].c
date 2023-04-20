#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }

int cnt[7]={0};

 for (int i = 0; i < n; i++)
    {
        int val=a[i];
           cnt[val]++;
 
    }
 for (int i = 0; i < n; i++)
    {
           printf("%d - %d\n",i,cnt[i]);
 
    }

    return 0;
}



//    for (int i = 0; i < n; i++)
//     {
//       if (a[i]==0)
//       {
//         cnt[0]++;
//       }
//      if (a[i]==1)
//      {
//         cnt[1]++;         //all these funtions indicate 
//                           //cnt[a[i]]++;
//      }
//       if (a[i]==2)
//      {
//          cnt[2]++;
//      }
//       if (a[i]==3)
//      {
//          cnt[3]++;
//      }
      
//     }






    // int zero=0,one=0,two=0,three=0;
    //   for (int i = 0; i < n; i++)
    // {
    //   if (a[i]==0)
    //   {
    //     zero++;
    //   }
    //  if (a[i]==1)
    //  {
    //     one++;
    //  }
    //   if (a[i]==2)
    //  {
    //     two++;
    //  }
    //   if (a[i]==3)
    //  {
    //     three++;
    //  }
      
    // }
    // printf(" 0 - %d\n 1 - %d\n 2 - %d \n 3 - %d",zero,one,two,three);
    

    // VERY HARD TO GET THE COUNT OF SEVERAL VARIABLES ALTERNATIVE AND EASIER WAY 



