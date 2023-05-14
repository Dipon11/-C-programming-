#include <stdio.h>
#include <string.h>

int main() {
    char arr[1001];
    fgets(arr, 1001, stdin);
    int cap = 0, small = 0, space = 0;

    for (int i = 0; i < strlen(arr); i++) {
        
        if (arr[i] >= 'a' && arr[i] <= 'z') 
        {
            small++;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            cap++;
        } 
        else if (arr[i] == ' ') 
        {
            space++;
        }
    }

    printf("Capital - %d\n", cap);
    
    printf("Small-%d\n", small);
    
    printf("Spaces-%d\n", space);
    
    return 0;
}
