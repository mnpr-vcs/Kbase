#include <stdio.h>

int main() {
    int grades[5];
    int sum = 0;
    printf("Enter 5 grades: \n");
    for (int i =0; i < 5; i++) {
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    // cast to float for accurate conversion
    float average = (float) sum / 5;
    printf("Average Grade: %.2f", average);
    printf("\nThe grades are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", grades[i]);
    }
    printf("\n");
    return 0;
}