
1.Has Return + Parameter:

int sum(int a, int b) {
int s;
s=a+b;
retun s;
}

int main() {
    int result = max(10, 20);
    printf("MAX %d\n", result);
    return 0;
}

It has a both parameter passed from the main function 
and it is returned to the main function as an integer 




2.Has Return + No Parameter
#include<stdio.h>
int fun() {
    return 7;
}

int main() {
    int value = fun();
    printf("Fun = %d\n", value);
    return 0;
}
fun() returns the pre defined value of fun as a int 
The main function calls fun and stores the returns result in a variable
called value.

3.No Return + Parameter:
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
print_array() function, you give it an array of numbers 
and how many numbers there are in the array. 
Then, the function will print out each number in the array 
No retrun required as we can see from the above code 
we can see that an arr is passed from the main 
funvction to print arr the parameter is 
given  You then give this
 array and its size to the print_array function,
 which will print out each number in the array to the screen.

 4.No Return + No Parameter
#include<stdio.h>
 void hello() {
    printf("Hello, world!\n");
}

int main() {
    hello();
    return 0;
}

 print_hello function simply prints the string "Hello, world!"
 The main() 
 function calls hello(), which prints the string.No return or parameter 
 is needed in this function 