#include <algorithm>
#include <cstdio>

bool binarySearch(int array[], size_t size, int x) {
  int left = 0;
  int right = size;

  while (left < right) {
    int middle = left + (right - left) / 2;
    if (x < array[middle]) {
      right = middle;
    } else if (x > array[middle]) {
      left = middle + 1;
    } else {
      return true;
    }
  }

  return false;
}

int main(int argc, char** argv) {
  int array[64];
  char ch, i = 0;
  while (i < 64 && (ch = getchar()) != '\n') {
    array[i++] = ch - '0';
  }

  std::sort(array, array + i);

  int x = 0;
  printf("Enter x: ");
  scanf("%i", &x);
  bool answer = binarySearch(array, i, x);

  if (answer) {
    printf("\e[5;00;32mYes\e[m\n");
  } else {
    printf("\e[5;00;31mNo\e[m\n");
  }
  return 0;
}

