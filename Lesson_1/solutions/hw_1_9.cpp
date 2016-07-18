#include <cstdio>
#include <cmath>

int main(int argc, char** argv) {
  printf("\nHomework 9\n");

  long long max_int = 0;
  for (int i = 0; i < 31; ++i) {
    max_int += std::pow(2, i);
  }

  printf("MAX INT = %lli\n", max_int);

  return 0;
}

