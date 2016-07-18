#include <cstdio>

int average(int array[]) {
  int sum = 0;
  for (int i = 0; i < 16; ++i) {
    sum += array[i];
  }
  return sum / 16;
}

int main(int argc, char** argv) {
  printf("\nHomework 9\n");

  int array[16];
  for (int i = 0; i < 16; ++i) {
    scanf("%i", &array[i]);
  }

  printf("Average: %i\n", average(array));

  return 0;
}

