
// Run with Ctrl+Alt+N

#include <stdio.h>
#include <stdlib.h>

int main() {

    int age = 30;
    // a reference to a pointer
    int * pAge = &age; // will save the memory address into pAge

    // %p will return the memory address
    printf("%p\n", &age);
    
    // use * on a pointer reference to dereference it
    printf("%d\n", *pAge);
    
    return 0;
}