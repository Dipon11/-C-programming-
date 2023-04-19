#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    fgets(s, 1001, stdin);
    int len = strlen(s);
    int palindrome = 1;
    
    for (int i = len - 1; i >= 0; i--) {
        for (int j = 0; j < len; j++) {
            if (s[j] != s[i]) {
                palindrome = 0;
                break;
            }
        }
        }
    }

    if (palindrome == 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
