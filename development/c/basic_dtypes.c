#include <stdio.h>

int main() {
  int age = 30;
  float price = 3.14;
  char initial = 'J';

  printf("Age: %d\n", age);
  printf("Price: %2f\n", price);
  printf("Initial: %c\n", initial);

  int ageNextYear = age + 1;
  printf("Age next year: %d\n", ageNextYear);

  return 0;
}
