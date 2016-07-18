#include <cstdio>

int main(int argc, char** argv) {
  printf("\nHomework 11\n");

  int year;
  scanf("%i", &year);

  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
    printf("yes\n");
  } else {
    printf("no\n");
  }

  return 0;
}

