#include <stdio.h>

void increment(int *x) {
    (*x)++; // increment the value at the address
}

int main() {
    int num = 10;
    increment(&num); // address of num
    printf("%d\n", num);
    return 0;
}