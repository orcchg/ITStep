#include <cstdio>

int main(int argc, char** argv) {
  printf("\nHomework 3\n");

  int N;
  scanf("%i", &N);

/*
      *
     ***         *
    *****       ***       *
   *******     *****     ***     *
  *********   *******   *****   ***   *
*/

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < (N - i); ++j) {
      printf(" ");
    }
    for (int k = 0; k < i * 2 + 1; ++k) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}

