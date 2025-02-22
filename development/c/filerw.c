#include <stdio.h>
#include <string.h>

int main() {
    // Writing to a file:
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        perror("Error opening output file");
        return 1;
    }

    fprintf(outfile, "Name: %s\n", "Alice");
    fprintf(outfile, "Age: %d\n", 30);
    fputs("Hello, file!\n", outfile);
    fclose(outfile);

    // Reading from a file:
    FILE *infile = fopen("output.txt", "r");
    if (infile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    char name[50];
    int age;
    char buffer[100];

    fscanf(infile, "Name: %s", name);
    fscanf(infile, "Age: %d", &age);
    fgets(buffer, 100, infile); // Read the rest of the line (including "Hello, file!")

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Message: %s", buffer);

    fclose(infile);

    return 0;
}