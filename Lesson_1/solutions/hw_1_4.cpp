#include <cstdio>

int main(int argc, char** argv) {
  printf("\nHomework 4\n");

  int a, N;
  scanf("%i %i", &a, &N);
  int n = N;

  int power = 1;
  while (N > 0) {
    if (N % 2 != 0) {
      power *= a;
      --N;
    } else {
      a *= a;
      N /= 2;
    }
  }

  printf("%i^%i = %i\n", a, n, power);

  return 0;
}

