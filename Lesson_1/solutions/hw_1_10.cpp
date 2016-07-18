#include <cstdio>
#include <cmath>

int factorial(int N) {
  if (N <= 1) {
    return 1;
  }
  return factorial(N - 1) * N;
}

int main(int argc, char** argv) {
  printf("\nHomework 10\n");

  int N;
  double x;
  scanf("%i %lf", &N, &x);

  double sine = 0.0;

  for (int i = 0; i < N; ++i) {
    int base = i * 2 + 1;
    sine += std::pow(x, base) / factorial(base) * std::pow(-1, i);
  }

  printf("sin(%lf) = %lf\n", x, sine);

  return 0;
}

