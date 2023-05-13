#include <stdio.h>
#include <string.h>

int is_palindrome(char *arr) {
    int len = strlen(arr);
    for (int i = 0; i < len / 2; i++) {
        
        if (arr[i] != arr[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char arr[11];
    scanf("%s", arr);
    int result = is_palindrome(arr);
     if (result == 1) {
        printf("Palindrome\n", arr);
    } else {
        printf("Not Palindrome\n", arr);
    }

    return 0;
}
