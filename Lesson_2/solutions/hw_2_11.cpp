#include <cstdio>

void decToBase(int N, int B) {
  if (B < 2 || B > 10) {
    printf("Wrong base: %i", B);
    return;
  }

  if (B == 10) {
    printf("%i", N);
    return;
  }

  // --------------------------------------------
  int power = 0;
  int M = N;

  while (N > 0) {
    N /= B;
    ++power;
  }

  char buffer[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int i = power - 1;

  while (M > 0) {
    buffer[i] = M % B + '0';
    M /= B;
    --i;
  }

  for (int i = 0; i < power; ++i) {
    printf("%c", buffer[i]);
  }
}

int main(int argc, char** argv) {
  printf("\nHomework 11\n");

  int B, N;
  scanf("%i %i", &B, &N);

  decToBase(N, B);
  printf("\n");

  return 0;
}

