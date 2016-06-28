#include <cstdio>

/**
 * Здесь решается другая задача. Проверяется, является ли N некоторой
 * целой степенью числа K, т.е. что существует целое x, так что: K^x == N
 */

bool isPowerOfK(int N, int K);

int main(int argc, char** argv) {
  int N, K;
  scanf("%i %i", &N, &K);

  if (isPowerOfK(N, K)) {
    printf("yes\n");
  } else {
    printf("no\n");
  }

  return 0;
}

bool isPowerOfK(int N, int K) {
  int C = N;
  while (C > 1 && (C % K == 0)) {
    C /= K;
  }
  return C == 1;
}

