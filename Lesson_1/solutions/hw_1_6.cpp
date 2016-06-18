#include <cstdio>
#include <cmath>

int main(int argc, char** argv) {
  printf("\nHomework 6\n");

  int N = 5;
  int X[N], Y[N], Z[N];

  printf("Input X: ");
  for (int i = 0; i < N; ++i) {
    scanf("%i", &X[i]);
  }

  printf("Input Y: ");
  for (int i = 0; i < N; ++i) {
    scanf("%i", &Y[i]);
  }

  float distance = 0;
  for (int i = 0; i < N; ++i) {
    distance += (X[i] - Y[i]) * (X[i] - Y[i]);
  }

  printf("Distance = %f\n", sqrt(distance));

  return 0;
}

