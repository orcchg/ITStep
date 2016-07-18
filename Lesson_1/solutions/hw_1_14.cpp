#include <cstdio>

int main(int argc, char** argv) {
  printf("\nHomework 14\n");

  int A[] = {5, -9, 2, 0, -14, 7, 8, 11, 5, -3, 2, -8, 6, 3, -4, -14, 9, 20, 1, 6};
  int N = 20;

  // insertion sort
  for (int k = 1; k < N; ++k) {
    int item = A[k];
    int j = k - 1;
    while (j >= 0 && A[j] > item) {
      A[j + 1] = A[j];
      --j;
    }
    A[j + 1] = item;
  }

  for (int i = 0; i < N; ++i) {
    printf("%i ", A[i]);
  }
  printf("\n");

  return 0;
}

