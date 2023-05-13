#include <stdio.h>

int main() {
    int n, temp = 0, digit;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%1d", &digit);
        temp = temp + digit;
    }
    printf("%d\n", temp);
    return 0;
}
