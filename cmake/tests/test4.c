#include <stdio.h>
#include <string.h>

int main() {
    printf("Hello, CTest!");  
    if (strcmp("Hello, CTest!", "Hello, CTest!") == 0) {
        printf("Test passed!\n");
        return 0;
    } else {
        printf("Test failed!\n");
        return 1;
    }
}
