#include <stdio.h>

int main() {
    int age = 30;
    int *age_pointer = &age;
    printf("Address of age: %p\n", &age);
    printf("Value of age: %d\n", age);
    // the address stored in age_pointer (same as &age)
    printf("Value of age_pointer: %p\n", age_pointer);
    printf("Value at the address stored in age_pointer: %d\n", *age_pointer);
    *age_pointer = age+1; // Modifying the value at the address
    printf("New value of age: %d\n", age);

    return 0;
}