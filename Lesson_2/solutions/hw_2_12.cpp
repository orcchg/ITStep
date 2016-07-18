#include <cstdio>
#include <cstdlib>

void printArray(int A[], int N) {
  for (int i = 0; i < N; ++i) {
    printf("%i ", A[i]);
  }
}

void concat(int A[], int N, int B[], int M, int C[]) {
  for (int i = 0; i < N; ++i) {
    C[i] = A[i];
  }
  for (int i = N; i < N + M; ++i) {
    C[i] = B[i - N];
  }
}

int main(int argc, char** argv) {
  printf("\nHomework 12\n");

  int N = 5;
  int A[N];
  for (int i = 0; i < N; ++i) {
    A[i] = rand() % 100 + 1;
  }
  printArray(A, N);
  printf("\n");

  int M = 7;
  int B[M];
  for (int i = 0; i < M; ++i) {
    B[i] = rand() % 100 + 1;
  }
  printArray(B, M);
  printf("\n");

  int C[N + M];
  concat(A, N, B, M, C);
  
  printArray(C, N + M);
  printf("\n");

  return 0;
}

