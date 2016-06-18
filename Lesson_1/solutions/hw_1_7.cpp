#include <cstdio>

int main(int argc, char** argv) {
  printf("\nHomework 7\n");

  int a, b;
  scanf("%i", &a);
  b = a;

  int power = 0;
  while (a > 0) {
    a /= 2;
    ++power;
  }

  char buffer[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int i = power - 1;

  while (b > 0) {
    buffer[i] = b % 2 + '0';
    b /= 2;
    --i;
  }

  for (int i = 0; i < power; ++i) {
    printf("%c", buffer[i]);
  }
  printf("\n");

  return 0;
}

