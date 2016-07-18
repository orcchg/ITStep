#include <cstdio>
#include <cmath>

int main(int argc, char** argv) {
  printf("\nHomework 1\n");

  int a, b;
  scanf("%i", &a);
  b = a;

  int power = 0;
  while (a > 0) {
    a /= 10;
    ++power;
  }
  
  int c = 0;
  for (int p = 1; p <= power; ++p) {
    int mul = std::pow(10, power - p);
    int res = b % mul;
    int sub = b - res;
    int div = sub / mul;
    b -= sub;
    c += div * std::pow(10, p - 1);
  }

  printf("Answer: %i\n", c);

  return 0;
}

