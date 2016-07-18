#include <cstdio>

int main(int argc, char** argv) {
  printf("\nHomework 8\n");

  int a, b;
  scanf("%i", &a);
  b = a;

  int power = 0;
  while (a > 0) {
    a /= 10;
    ++power;
  }

  char buffer[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int i = power - 1;

  while (b > 0) {
    int residual = b % 16;
    switch (residual) {
      case 10: buffer[i] = 'A'; break;
      case 11: buffer[i] = 'B'; break;
      case 12: buffer[i] = 'C'; break;
      case 13: buffer[i] = 'D'; break;
      case 14: buffer[i] = 'E'; break;
      case 15: buffer[i] = 'F'; break;
      default:
        buffer[i] = residual + '0';
        break;
    }
    b /= 16;
    --i;
  }

  printf("0x");
  for (int i = 0; i < power; ++i) {
    printf("%c", buffer[i]);
  }
  printf("\n");

  return 0;
}

