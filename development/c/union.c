#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 10;
    printf("Integer: %d\n", data.i);

    data.f = 3.14; // Now the float value overwrites the integer value
    printf("Float: %.2f\n", data.f);

    strcpy(data.str, "Hello"); // Now the string overwrites the float value
    printf("String: %s\n", data.str);

    // Be careful!  data.i and data.f no longer hold meaningful values.

    return 0;
}