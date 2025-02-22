#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int sum = add(num1, num2);
    printf("Sum: %d\n", sum);
    greet("John");
    return 0;
}