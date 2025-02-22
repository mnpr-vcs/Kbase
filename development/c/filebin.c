#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    // Write to binary file
    FILE *outfile = fopen("numbers.bin", "wb");
    fwrite(numbers, sizeof(int), 5, outfile); // Write 5 ints
    fclose(outfile);

    // Read from binary file
    int read_numbers[5];
    FILE *infile = fopen("numbers.bin", "rb");
    fread(read_numbers, sizeof(int), 5, infile); // Read 5 ints
    fclose(infile);

    for (int i = 0; i < 5; i++) {
        printf("%d ", read_numbers[i]);
    }
    printf("\n");

    return 0;
}