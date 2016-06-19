#include <cstdio>

double mul(double x, double y) {
  return x * y;
}

int main(int argc, char** argv) {
  printf("\nHomework 2\n");

  double a, b;
  scanf("%lf %lf", &a, &b);
  printf("Answer: %lf\n", mul(a, b));

  return 0;
}

