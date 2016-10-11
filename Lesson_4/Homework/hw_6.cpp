#include <cstdio>
#include <cstring>

bool isPalindrome(const char* str) {
  int length = strlen(str);
  for (int i = 0; i < length / 2; ++i) {
    if (str[i] != str[length - i - 1]) {
      return false;
    }
  }
  return true;
}

int main(int argc, char** argv) {
  char str[256];
  for (size_t i = 0; i < 256; ++i) {
    str[i] = 0;
  }

  scanf("%s", str);
  if (isPalindrome(str)) {
    printf("\e[5;00;32mYes\e[m\n");
  } else {
    printf("\e[5;00;31mNo\e[m\n");
  }

  return 0;
}

