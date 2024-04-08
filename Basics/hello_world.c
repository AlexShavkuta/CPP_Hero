
// Run with Ctrl+Alt+N

#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[20];
    printf("Hello world");
    
    // will enable us to get a string with 
    // multiple words
    fgets(name, 20, stdin);


    return 0;
}