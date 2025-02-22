#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int)); // Initial allocation
    if (arr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The integers are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *new_arr = (int *)realloc(arr, 10 * sizeof(int)); // Resize to 10 ints
    if (new_arr == NULL) {
        perror("Memory reallocation failed");
        return 1;
    }

    arr = new_arr; // Update the original pointer (IMPORTANT!)
    printf("Enter 5 more integers:\n");
    for (int i = 5; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The integers are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}