#include <cstdio>
#include <cmath>

int main(int argc, char** argv) {
  double coeffs[11];
  for (int i = 0; i < 11; ++i) {
    scanf("%lf", &coeffs[i]);
  }

  double x;
  scanf("%lf", &x);

  double y = 0.0;
  for (int i = 0; i < 11; ++i) {
    y += coeffs[10 - i] * std::pow(x, i);
  }

  printf("answer: %lf\n", y);
  return 0;
}

