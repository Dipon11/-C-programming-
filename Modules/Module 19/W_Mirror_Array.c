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
    
     for (int i = 0; i < n; i++) {
        for (int j = m-1; j >= 0; j--) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
     }
 
    return 0;
}