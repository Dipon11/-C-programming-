// //In pass by value, a copy of the variable's
// value is passed to the function. This means that
// any changes made to the value inside the function
// do not affect the original variable outside of the function.
// Pass by value is the default behavior
// in most programming languages


void inc(int num) {
    num++;
}


int main() {
    int num = 5;
    inc(num);
    printf("num tobu o %d\n", num);
    return 0;
}






// In pass by reference, a reference to the variable
//  is passed to the function, allowing the function to
//  directly modify the original variable outside of the function.




void inc(int *num_ptr) {
    (*num_ptr)++;
}


int main() {
    int num = 5;
    inc(&num);
    printf("num change %d\n", num);
    return 0;
}
