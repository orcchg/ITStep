#include <cstdio>

long long akkerman(int m, int n) {
  printf("%i %i\n", n, m);
  if (n < 0 || m < 0) {
    return 0;
  }

  if (m == 0) {
    return n + 1;
  }

  if (n == 0) {
    return akkerman(m - 1, 1);
  }

  return akkerman(m - 1, akkerman(m, n - 1));
}

int main(int argc, char** argv) {
  printf("\nHomework 14\n");

  int m, n;
  scanf("%i %i", &m, &n);

  printf("Akkerman: %lli\n", akkerman(m, n));

  return 0;
}

