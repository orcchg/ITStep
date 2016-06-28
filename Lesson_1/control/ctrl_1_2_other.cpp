#include <cstdio>
#include <cmath>

// схема Горнера (Horner's rule)

int main(int argc, char** argv) {
  double coeffs[11];
  for (int i = 0; i < 11; ++i) {
    scanf("%lf", &coeffs[i]);
  }

  double x;
  scanf("%lf", &x);

  double y = 0.0;
  for (int i = 0; i < 11; ++i) {
    y = coeffs[i] + y * x;
  }

  printf("answer: %lf\n", y);
  return 0;
}

