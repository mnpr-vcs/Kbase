#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Allocate memory using malloc
    int *arr = (int *)malloc(n * sizeof(int)); // Important: Cast to (int *)

    if (arr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    printf("Enter the integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The integers are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}