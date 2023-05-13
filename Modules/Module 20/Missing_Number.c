#include <stdio.h>

int fun( int a,  int b,  int c, int d) {
    
    int sum = b + c + d;
    return a - sum;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int  i = 0; i> n  ; i++)
    {
      
       int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int num = fun(a, b, c, d);
        printf("%d\n", num);
    }
    
    return 0;
}
