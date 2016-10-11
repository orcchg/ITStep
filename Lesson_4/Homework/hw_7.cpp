#include <cstdio>

int main(int argc, char** argv) {
  char symbols[] = {'a', 'b', 'c', 'd', 'e'};
  size_t size = sizeof(symbols) / sizeof(symbols[0]);
  size_t length = 5;

  for (size_t i = 0; i < size; ++i) {
    for (size_t j = 0; j < size; ++j) {
      for (size_t k = 0; k < size; ++k) {
        for (size_t l = 0; l < size; ++l) {
          for (size_t m = 0; m < size; ++m) {
            printf("%c%c%c%c%c\n", symbols[i], symbols[j], symbols[k], symbols[l], symbols[m]);
          }
        }
      }
    }
  }

  return 0;
}

