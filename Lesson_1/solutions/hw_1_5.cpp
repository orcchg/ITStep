#include <cstdio>

int main(int argc, char** argv) {
  printf("\nHomework 5\n");

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

  int scalar = 0;
  for (int i = 0; i < N; ++i) {
    scalar += X[i] * Y[i];
    Z[i] = X[i] + Y[i];
  }

  printf("Scalar = %i\n", scalar);

  char delimiter;
  printf("Z = (");
  for (int i = 0; i < N; ++i) {
    printf("%c%i", delimiter, Z[i]);
    delimiter = ' ';
  }
  printf(")\n");

  return 0;
}

