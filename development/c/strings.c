#include <stdio.h>
#include <string.h>

int main() {
    char message[] = "Hello";
    char name[20];

    printf("Enter your name: ");
    // read input, limiting to 19 characters to prevent buffer overflow
    scanf("%19s", name);

    char greeting[50] = "Hello, "; // Initialize with "Hello, "
    strcat(greeting, name);        // Concatenate the name
    strcat(greeting, "!");       // Concatenate "!"

    printf("%s\n", greeting);
    // %zu for size_t (the return type of strlen)
    printf("Length of greeting: %zu\n", strlen(greeting));

    char str1[] = "apple";
    char str2[] = "banana";

    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("Strings are equal.\n");
    } else if (comparison < 0) {
        printf("%s is less than %s.\n", str1, str2);
    } else {
        printf("%s is greater than %s.\n", str1, str2);
    }

    return 0;
}