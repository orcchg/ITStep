#include <cstdio>
#include <cmath>

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
  double x = std::pow(N, 1.0 / K);
  int y = (int) x;
  double residual = x - y;

  return residual <= 0.0000001;
}

