#include <cstdio>
#include <cstring>

void reverse(char* str) {
  int length = strlen(str);
  for (int i = 0; i < length / 2; ++i) {
    char temp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = temp;
  }
}

int main(int argc, char** argv) {
  char str[256];
  for (int i = 0; i < 256; ++i) str[i] = 0;

  scanf("%s", str);

  reverse(str);

  printf("%s\n", str);

  return 0;
}

