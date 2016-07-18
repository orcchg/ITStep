#include <cstdio>

int main(int argc, char** argv) {
  printf("\nHomework 8\n");

  int a = 1;
  int sum = 0;
  int count = 0;

  while (a != 0) {
    scanf("%i", &a);
    sum += a;
    ++count;
  }
  --count;

  printf("Sum of %i numbers: %i\n", count, sum);

  return 0;
}

