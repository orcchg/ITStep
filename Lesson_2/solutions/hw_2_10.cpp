#include <cstdio>
#include <cmath>

double average(int array[]) {
  double mul = 1;
  for (int i = 0; i < 16; ++i) {
    mul *= array[i];
  }
  for (int i = 0; i < 4; ++i) {
    mul = sqrt(mul);
  }
  return mul;
}

int main(int argc, char** argv) {
  printf("\nHomework 10\n");

  int array[16];
  for (int i = 0; i < 16; ++i) {
    scanf("%i", &array[i]);
  }

  printf("Average: %lf\n", average(array));

  return 0;
}

