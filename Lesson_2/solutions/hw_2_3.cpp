#include <cstdio>

int maxInArray(int array[], int size) {
  int max = array[0];
  for (int i = 1; i < size; ++i) {
    if (max < array[i]) {
      max = array[i];
    }
  }
  return max;
}

int main(int argc, char** argv) {
  printf("\nHomework 3\n");

  int array[256];
  for (int i = 0; i < 256; ++i) {
    array[i] = 0;
  }

  int N;
  scanf("%i", &N);

  for (int i = 0; i < N; ++i) {
    scanf("%i", &array[i]);
  }

  int max = maxInArray(array, N);

  printf("Array: %i\n", max);

  return 0;
}

