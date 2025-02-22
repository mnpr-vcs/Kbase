#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers; // ptr now points to numbers[0]

    printf("%d\n", *ptr);     // (numbers[0])
    printf("%d\n", *(ptr + 1)); // (numbers[1])  // Pointer arithmetic
    return 0;
}