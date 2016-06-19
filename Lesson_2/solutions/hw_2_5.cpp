#include <cstdio>

// insertion sort
void sort(int A[], int N) {
  for (int k = 1; k < N; ++k) {
    int item = A[k];
    int j = k - 1;
    while (j >= 0 && A[j] < item) {
      A[j + 1] = A[j];
      --j;
    }
    A[j + 1] = item;
  }
}

int main(int argc, char** argv) {
  printf("\nHomework 5\n");

  int array[256];
  for (int i = 0; i < 256; ++i) {
    array[i] = 0;
  }

  int N;
  scanf("%i", &N);

  for (int i = 0; i < N; ++i) {
    scanf("%i", &array[i]);
  }

  sort(array, N);

  for (int i = 0; i < N; ++i) {
    printf("%i ", array[i]);
  }
  printf("\n");

  return 0;
}

