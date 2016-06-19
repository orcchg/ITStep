#include <cstdio>

int main(int argc, char** argv) {
  printf("\nHomework 15\n");

  for (int s = 0; s < 2; ++s) {
    for (int l = 1; l < 10; ++l) {
      for (int c = 1; c <= 5; ++c) {
        printf("%i * %i = %i    ", c + 5 * s, l, (c + 5 * s) * l);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}

