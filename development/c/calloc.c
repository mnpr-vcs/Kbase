#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of floats: ");
    scanf("%d", &n);

    float *arr = (float *)calloc(n, sizeof(float)); // Allocates and initializes to 0.0

    if (arr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    printf("Enter the floats:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("The floats are:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}