#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);

    if(x >= 48 && x <= 57) {
        printf("IS DIGIT");
    }
    else if(x >= 'a' && x <= 'z') {
        printf("ALPHA\nIS SMALL");
    }
    else if(x >= 'A' && x <= 'Z') {
        printf("ALPHA\nIS CAPITAL");
    }

    return 0;
}