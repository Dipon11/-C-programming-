#include<stdio.h>
void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    print_array(arr, size);
    return 0;
}