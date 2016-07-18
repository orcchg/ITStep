#include <cstdio>

bool isPrime(int N) {
  if (N < 4 && N >= 0) {
    return true;
  }

  if (N < 0) {
    N *= -1;
  }

  for (int x = 2; x < N - 1; ++x) {
    if (N % x == 0) {
      return false;
    }
  }

  return true;
}

int main(int argc, char** argv) {
  printf("\nHomework 13\n");

  int a = 1;
  int count_even = 0, count_odd = 0, count_prime = 0;

  while (true) {
    scanf("%i", &a);

    if (a == 0) {
      break;
    }

    if (isPrime(a)) {
      ++count_prime;
    }

    if (a % 2 == 0) {
      ++count_even;
    } else {
      ++count_odd;
    }
  }

  printf("Even: %i, Odd: %i, Prime: %i\n", count_even, count_odd, count_prime);

  return 0;
}

