#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   int n, count = 0, rqnum = 0;
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   for (int i = 0; i < n; i++)
   {
      if (arr[i] >= count)
      {
         count = arr[i];
      }
   }
   for (int i = 0; i < n; i++)
   {
      if (arr[i] <= count)
      {
         rqnum = arr[i] - count;
         printf("%d ", abs(rqnum));
      }
   }

   return 0;
}