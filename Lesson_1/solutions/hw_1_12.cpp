#include <cstdio>

int main(int argc, char** argv) {
  printf("\nHomework 12\n");

  int a, b;
  scanf("%i %i", &a, &b);

  int m = a, n = b,
      p = 1, q = 0,
      r = 0, s = 1, d = 0;

  int x = 0, y = 0;
	
  while(m > 0 && n > 0) {
    if (m >= n) {
      m -= n;
      p -= r;
      q -= s;
    } else {
      n -= m;
      r -= p;
      s -= q;
    }
  }
	
  if (m == 0) {
    d = n;
    x = r;
    y = s;
  } else if (n == 0) {
    d = m;
    x = p;
    y = q;
  }

  printf("gcd(%i, %i) = %i, x = %i, y = %i\n", a, b, d, x, y);

  return 0;
}

