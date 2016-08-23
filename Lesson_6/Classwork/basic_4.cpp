#include <cstdio>

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(int argc, char** argv) {
	int x = 5;
	int y = 7;
	swap(&x, &y);
	printf("x = %i, y = %i\n", x, y);
	return 0;
}
