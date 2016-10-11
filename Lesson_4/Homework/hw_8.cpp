#include <cstdio>

int main(int argc, char** argv) {
  size_t size = 5;
  char symbols[size];
  scanf("%s", symbols);

  int x = 0;
  for (size_t i = 0; i < size; ++i) {
    for (size_t j = 0; j < size; ++j) {
      if (j == i) continue;
      for (size_t k = 0; k < size; ++k) {
        if (k == i || k == j) continue;
        for (size_t l = 0; l < size; ++l) {
          if (l == i || l == j || l == k) continue;
          for (size_t m = 0; m < size; ++m) {
            if (m == i || m == j || m == k || m == l) continue;
            printf("%c%c%c%c%c\n", symbols[i], symbols[j], symbols[k], symbols[l], symbols[m]);
            ++x;
          }
        }
      }
    }
  }

  printf("total: %i\n", x);

  return 0;
}

