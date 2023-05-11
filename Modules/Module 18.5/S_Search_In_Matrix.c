#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]); // taking input for the array
        }
    }

    int x;
    scanf("%d", &x);
    int flag = 0;
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == x) {
                flag = 1;
                break; // exit the loop as soon as the number is found
            }
        }
    } 

    if (flag == 1) {
        printf("will not take number");
    } else {
        printf("will take number");
    }
    
    return 0;
}
