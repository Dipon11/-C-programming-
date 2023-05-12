#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    return max(arr[n-1], findMax(arr, n-1));
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int ans = findMax(arr, n);
    printf("%d\n", ans);
    return 0;
}
