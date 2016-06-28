#include <cstdio>
#include <cmath>

bool isSquare(int N);

int main(int argc, char** argv) {
  int N;
  scanf("%i", &N);

  if (isSquare(N)) {
    printf("yes\n");
  } else {
    printf("no\n");
  }

  return 0;
}

bool isSquare(int N) {
  double x = std::sqrt(N);
  int y = (int) x;
  double residual = x - y;

  return residual <= 0.0000001;
}

