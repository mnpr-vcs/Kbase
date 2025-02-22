#include <stdio.h>

#define MAX_VALUE 100
#define CUBE(x) ((x) * (x) * (x))

int main() {
    int num = 5;
    printf("The cube of %d is: %d\n", num, CUBE(num));
    printf("MAX_VALUE is: %d\n", MAX_VALUE);

    #ifndef DEBUG
        printf("This is a debug message.\n");
    #endif

    return 0;
}